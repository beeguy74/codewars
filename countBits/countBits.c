#include <stddef.h>

size_t countBits(unsigned value)
{
  int      n;
  
  n = 0;
  while (value)
  {
    if (value % 2)
    {
      n++;
    }
    value = value / 2; 
  }
  return (n);
}
