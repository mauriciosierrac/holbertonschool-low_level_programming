#include "holberton.h"

/**
* times_table -  print 9 times table.
*
* @c: variable
* @a: variable
* @b: variable
*
* Return: void
**/

void times_table(void)
{

int a = 0, b = 0, c;

while (a < 10)
{
while (b < 10)
{
c = a * b;
if (c > 9)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
_putchar(',');
_putchar(' ');

}
else
{
_putchar(c + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
b++;
}
a++;
b = 0;
_putchar('\n');
}
}
