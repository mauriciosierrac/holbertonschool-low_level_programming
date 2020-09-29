#include "holberton.h"

/**
 * print_rev - print string in reverse
  * @s: variable pointer
 **/

void print_rev(char *s)
{

int  size, len;

for (size = 0; *(s + size) != '\0'; size++)
;

for (len = (size - 1); len >= 0 ; len--)
{
_putchar(*(s + len));
}

_putchar('\n');

}
