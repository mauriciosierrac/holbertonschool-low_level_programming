#include "holberton.h"

/**
 * _print_rev_recursion - print string rev
 * @s: string
 *
 **/

void _print_rev_recursion(char *s)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
;
for (j = i; j >= 0; j--)
{
_putchar(s[j]);
}
}
