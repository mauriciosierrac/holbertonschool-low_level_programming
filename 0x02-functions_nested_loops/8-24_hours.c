#include "holberton.h"

/**
* jack_bauer - print second to second
*
*
* Return: 0
**/


void jack_bauer(void)
{
int a, b;

for (a = 0; a < 24; a++)
{
for (b = 0; b <= 59; b++)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar(58);
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
}
}

}
