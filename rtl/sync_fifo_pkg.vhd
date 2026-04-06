-- Synchronous FIFO Package
-- Contains helper functions, type definitions, and constants

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

package sync_fifo_pkg is

  -- Function to calculate log2 (ceil)
  function log2(val : positive) return natural;

  -- Function to check if a number is power of two
  function is_power_of_two(val : positive) return boolean;

  -- Function to calculate maximum of two integers
  function max(a, b : integer) return integer;

  -- Function to calculate minimum of two integers
  function min(a, b : integer) return integer;

  -- Type definitions
  type fifo_memory_type is (REGISTER_BASED, BRAM_BASED);

  -- Constants
  constant C_DEFAULT_DATA_WIDTH : positive := 32;
  constant C_DEFAULT_FIFO_DEPTH : positive := 16;
  constant C_DEFAULT_ALMOST_FULL_THRESHOLD  : natural := 12;
  constant C_DEFAULT_ALMOST_EMPTY_THRESHOLD : natural := 4;

end package sync_fifo_pkg;

package body sync_fifo_pkg is

  -- log2 function (ceil)
  function log2(val : positive) return natural is
    variable result : natural := 0;
    variable temp   : natural := val;
  begin
    while temp > 1 loop
      result := result + 1;
      temp   := temp / 2;
    end loop;

    -- Adjust for exact power of two
    if 2**result < val then
      result := result + 1;
    end if;

    return result;
  end function log2;

  -- Check if number is power of two
  function is_power_of_two(val : positive) return boolean is
    variable val_unsigned : unsigned(31 downto 0) := to_unsigned(val, 32);
    variable val_minus_one : unsigned(31 downto 0) := to_unsigned(val - 1, 32);
  begin
    if val = 0 then
      return false;
    else
      return (val_unsigned and val_minus_one) = to_unsigned(0, 32);
    end if;
  end function is_power_of_two;

  -- Maximum of two integers
  function max(a, b : integer) return integer is
  begin
    if a > b then
      return a;
    else
      return b;
    end if;
  end function max;

  -- Minimum of two integers
  function min(a, b : integer) return integer is
  begin
    if a < b then
      return a;
    else
      return b;
    end if;
  end function min;

end package body sync_fifo_pkg;