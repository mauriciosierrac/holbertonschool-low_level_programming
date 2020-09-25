#include "holberton.h"

/**
 * more_numbers - print numbers 0 to 19, 10 times
 *
 * Return: void
 *
 **/


void more_numbers(void)
{
int a = 0, b;

for (b = 0; b < 10; b++)
{
while (a <= 14)
{
if (a > 9)
{
_putchar((a / 10) + '0');
}
_putchar((a % 10) + '0');
a++;
}
a = 0;
_putchar('\n');
}
}
