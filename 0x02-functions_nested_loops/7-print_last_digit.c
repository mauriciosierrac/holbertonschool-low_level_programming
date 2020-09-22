#include "holberton.h"

/**
 * print_last_digit - print last digit
 *
 * @n : parameter of 7-main.c
 *
 * Return: last digit
 *
 **/


int print_last_digit(int n)
{

int last;
if (n < 0)
{
n = n * -1;
last = n % 10;
_putchar(last + 48);
}
else
if (n > 0)
{
last = n % 10;
_putchar(last + 48);
}
else
if (n == 0)
{
last = n;
_putchar(last + 48);
}

return (last);
}
