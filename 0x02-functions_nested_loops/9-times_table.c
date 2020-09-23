#include "holberton.h"

/**
 * times_table -  print 9 times table.
 *
 * Return: void
 **/

void times_table(void)
{

int a, b, c;

for (a = 0; a <=9; a++)
  {
    for (b = 0; b <= 9; b++);
    {
      c = a *b;
      _putchar(c + '0');
      _putchar(',');
      _putchar(' ');
    }
  }
return
}
