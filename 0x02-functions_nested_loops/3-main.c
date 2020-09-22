#include "holberton.h"
#include <ctype.h>

/**
* main - check if some alpha is lower
*
* Return: 0 or 1
**/

int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');

return (0);
}
