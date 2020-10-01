#include "holberton.h"

/**
 * _strncpy - print concatenated
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: concatenated
 **/

char *_strncpy(char *dest, char *src, int n)
{

int i, j;
for (i = 0; src[i] != '\0'; i++)
;

for (j = 0; j < n && dest[j] != '\0'; j++)
{
if (j < i)
{
dest[j] = src[j];
}
else
dest[j] = 0;
}
return (dest);
}
