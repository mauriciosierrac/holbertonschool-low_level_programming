#include "holberton.h"

/**
 * print_line  - print line
 * @n: variable
 * Return: void
 **/

void print_line(int n)
{
int a;
while (a <= n)
{
if (a > 0)
{
_putchar('_');
}
a++;
}
_putchar('\n');

}
