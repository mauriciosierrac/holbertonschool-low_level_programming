#include "holberton.h"
#include <stdio.h>

/**
 * _puts - print string
 *
 * @str: variable pointer
 **/

void _puts(char *str)
{

int len;

for (len = 0; *(str + len) != '\0'; len++)
{
_putchar(*(str + len));
}
_putchar('\n');
}
