#include "holberton.h"

/**
 * print_diagonal - print
 * @n: variable
 *
 **/


void print_diagonal(int n)
{

int a;

while (a <= n)
{
  _putchar(' ');
if (a == n)
{
_putchar('\\');
}
a++;
}
_putchar('\n');

}
