#include "holberton.h"

/**
 * puts_half - print the second half of ths string
 *
 * @str: variable pointer
 *
 **/

void puts_half(char *str)
{

int len, h;

for (len = 0; *(str + len) != '\0'; len++)
;
if (len % 2 == 0)
{
h = len / 2;
}
else
{
h = len - ((len - 1) / 2);
}
for (; h < len; h++)
{
_putchar(str[h]);
}
_putchar('\n');
}
