-- Synchronous FIFO with parameterizable depth and width
-- Single clock domain, registered outputs

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.sync_fifo_pkg.all;

entity sync_fifo is
  generic (
    G_DATA_WIDTH : positive := C_DEFAULT_DATA_WIDTH;
    G_FIFO_DEPTH : positive := C_DEFAULT_FIFO_DEPTH;
    G_ALMOST_FULL_THRESHOLD  : natural := C_DEFAULT_ALMOST_FULL_THRESHOLD;
    G_ALMOST_EMPTY_THRESHOLD : natural := C_DEFAULT_ALMOST_EMPTY_THRESHOLD;
    G_MEMORY_TYPE : string := "REGISTER"
  );
  port (
    -- Clock and Reset
    clk_i          : in  std_logic;
    rst_i          : in  std_logic;

    -- Write Interface
    wr_en_i        : in  std_logic;
    wr_data_i      : in  std_logic_vector(G_DATA_WIDTH-1 downto 0);
    full_o         : out std_logic;
    almost_full_o  : out std_logic;

    -- Read Interface
    rd_en_i        : in  std_logic;
    rd_data_o      : out std_logic_vector(G_DATA_WIDTH-1 downto 0);
    empty_o        : out std_logic;
    almost_empty_o : out std_logic;

    -- Status Outputs
    wr_count_o     : out std_logic_vector(log2(G_FIFO_DEPTH+1)-1 downto 0);
    rd_count_o     : out std_logic_vector(log2(G_FIFO_DEPTH+1)-1 downto 0)
  );
end entity sync_fifo;

architecture rtl of sync_fifo is

  -- Constants
  constant C_ADDR_WIDTH : natural := log2(G_FIFO_DEPTH);
  constant C_COUNT_WIDTH : natural := log2(G_FIFO_DEPTH+1); -- Need +1 to represent 0..DEPTH

  -- Internal signals
  signal wr_ptr       : unsigned(C_ADDR_WIDTH-1 downto 0);
  signal rd_ptr       : unsigned(C_ADDR_WIDTH-1 downto 0);
  signal wr_ptr_next  : unsigned(C_ADDR_WIDTH-1 downto 0);
  signal rd_ptr_next  : unsigned(C_ADDR_WIDTH-1 downto 0);

  signal fifo_count   : unsigned(C_COUNT_WIDTH-1 downto 0);
  signal fifo_count_next : unsigned(C_COUNT_WIDTH-1 downto 0);

  signal full         : std_logic;
  signal empty        : std_logic;
  signal almost_full  : std_logic;
  signal almost_empty : std_logic;

  signal wr_en_valid  : std_logic;
  signal rd_en_valid  : std_logic;

  -- Memory signals
  signal mem_wr_en   : std_logic;
  signal mem_wr_addr : std_logic_vector(C_ADDR_WIDTH-1 downto 0);
  signal mem_rd_addr : std_logic_vector(C_ADDR_WIDTH-1 downto 0);

  -- Function for modulo wrap (handles non-power-of-two depths)
  function mod_wrap(ptr : unsigned; depth : positive) return unsigned is
    variable ptr_inc : unsigned(ptr'range);
  begin
    ptr_inc := ptr + 1;
    if ptr_inc = depth then
      return to_unsigned(0, ptr'length);
    else
      return ptr_inc;
    end if;
  end function mod_wrap;

begin


  -- Memory array instantiation
  mem_inst : entity work.memory_array
    generic map (
      G_DATA_WIDTH => G_DATA_WIDTH,
      G_DEPTH      => G_FIFO_DEPTH,
      G_MEM_TYPE   => G_MEMORY_TYPE
    )
    port map (
      clk_i     => clk_i,
      wr_en_i   => mem_wr_en,
      wr_addr_i => mem_wr_addr,
      wr_data_i => wr_data_i,
      rd_addr_i => mem_rd_addr,
      rd_data_o => rd_data_o
    );

  -- Connect memory signals
  mem_wr_en   <= wr_en_valid;
  mem_wr_addr <= std_logic_vector(wr_ptr);
  mem_rd_addr <= std_logic_vector(rd_ptr);

  -- Write and read enable validation (cannot write when full, read when empty)
  wr_en_valid <= wr_en_i and not full;
  rd_en_valid <= rd_en_i and not empty;

  -- Pointer update logic with modulo wrap
  wr_ptr_next <= mod_wrap(wr_ptr, G_FIFO_DEPTH) when wr_en_valid = '1' else wr_ptr;
  rd_ptr_next <= mod_wrap(rd_ptr, G_FIFO_DEPTH) when rd_en_valid = '1' else rd_ptr;

  -- FIFO count logic
  process(wr_en_valid, rd_en_valid, fifo_count)
  begin
    fifo_count_next <= fifo_count;

    if wr_en_valid = '1' and rd_en_valid = '0' then
      -- Write only
      fifo_count_next <= fifo_count + 1;
    elsif wr_en_valid = '0' and rd_en_valid = '1' then
      -- Read only
      fifo_count_next <= fifo_count - 1;
    -- If both or none, count stays the same
    end if;
  end process;

  -- Flag generation
  full  <= '1' when fifo_count = G_FIFO_DEPTH else '0';
  empty <= '1' when fifo_count = 0 else '0';

  almost_full  <= '1' when fifo_count >= G_ALMOST_FULL_THRESHOLD else '0';
  almost_empty <= '1' when fifo_count <= G_ALMOST_EMPTY_THRESHOLD else '0';

  -- Sequential process
  process(clk_i)
  begin
    if rising_edge(clk_i) then
      if rst_i = '1' then
        -- Reset
        wr_ptr     <= (others => '0');
        rd_ptr     <= (others => '0');
        fifo_count <= (others => '0');
      else
        -- Update pointers and count
        wr_ptr     <= wr_ptr_next;
        rd_ptr     <= rd_ptr_next;
        fifo_count <= fifo_count_next;
      end if;
    end if;
  end process;

  -- Output assignments
  full_o         <= full;
  empty_o        <= empty;
  almost_full_o  <= almost_full;
  almost_empty_o <= almost_empty;

  wr_count_o     <= std_logic_vector(fifo_count);
  rd_count_o     <= std_logic_vector(fifo_count);

end architecture rtl;