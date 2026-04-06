-- Memory Array Component for FIFO
-- Supports register-based or BRAM-based implementation

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.sync_fifo_pkg.all;

entity memory_array is
  generic (
    G_DATA_WIDTH : positive := C_DEFAULT_DATA_WIDTH;
    G_DEPTH      : positive := C_DEFAULT_FIFO_DEPTH;
    G_MEM_TYPE   : string   := "REGISTER"
  );
  port (
    clk_i     : in  std_logic;
    wr_en_i   : in  std_logic;
    wr_addr_i : in  std_logic_vector(log2(G_DEPTH)-1 downto 0);
    wr_data_i : in  std_logic_vector(G_DATA_WIDTH-1 downto 0);
    rd_addr_i : in  std_logic_vector(log2(G_DEPTH)-1 downto 0);
    rd_data_o : out std_logic_vector(G_DATA_WIDTH-1 downto 0)
  );
end entity memory_array;

architecture rtl of memory_array is

  -- Memory type definition
  type mem_array_t is array (0 to G_DEPTH-1) of std_logic_vector(G_DATA_WIDTH-1 downto 0);
  signal memory : mem_array_t := (others => (others => '0'));

  -- Attribute for BRAM inference (vendor-specific examples)
  attribute ram_style : string;

begin

  -- Memory process: synchronous write, synchronous read
  process(clk_i)
  begin
    if rising_edge(clk_i) then
      -- Synchronous write
      if wr_en_i = '1' then
        memory(to_integer(unsigned(wr_addr_i))) <= wr_data_i;
      end if;

      -- Synchronous read (always enabled)
      rd_data_o <= memory(to_integer(unsigned(rd_addr_i)));
    end if;
  end process;

  -- Conditionally apply RAM style attribute based on generic
  -- Note: Vendor-specific attributes may need adjustment
  apply_ram_style : if G_MEM_TYPE = "BRAM" generate
    -- For Xilinx: "block", for Intel: "MLAB", "M9K", "M20K", etc.
    -- This is a placeholder; actual attribute depends on target technology
    attribute ram_style of memory : signal is "block";
  end generate apply_ram_style;

  apply_distributed_style : if G_MEM_TYPE = "REGISTER" generate
    -- For Xilinx: "distributed" for LUTRAM, registers inferred by default
    attribute ram_style of memory : signal is "distributed";
  end generate apply_distributed_style;

end architecture rtl;