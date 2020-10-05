#include "holberton.h"

/**
 * *_memset - print char  or constant byte
 * @s: variable char string
 * @b: variable, constant byte
 * @n: size of the memory
 * Return: string
 **/

char *_memset(char *s, char b, unsigned int n)
{

unsigned  int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
