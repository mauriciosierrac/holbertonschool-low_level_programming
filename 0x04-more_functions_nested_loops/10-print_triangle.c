#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size:  variable
 *
 **/

void print_triangle(int size)
{

int f, c;

if (size > 0)
{
for (f = 1; f < (size + 1); f++)
{
for (c = 0; c < size; c++)
{
if (c < (size - f))
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
