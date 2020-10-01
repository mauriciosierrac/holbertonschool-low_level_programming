#include "holberton.h"

/**
 * _strncat - print concatenated
 *
 * @dest: variable1
 * @src: variable2
 * @n: variable 3
 * Return: contatenated
 **/

char *_strncat(char *dest, char *src, int n)
{

int i, j;

for (i = 0; dest[i] != '\0'; i++)
;

for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j + i] = src[j];
}

return (dest);

}
