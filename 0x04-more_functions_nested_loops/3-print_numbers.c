#include "holberton.h"

/**
 * print_numbers - print digits 0 to 9
 *
 * Return void
 **/

void print_numbers(void)
{

int a = 0;

while (a <= 9)
{
_putchar(a + '0');
a++;
}

_putchar('\n');
}
