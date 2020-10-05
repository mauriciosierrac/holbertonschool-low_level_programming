#include "holberton.h"

/**
 * *_memcpy - function copy a string to another string
 * @dest: string destiny
 * @src: string to copy
 * @n: numbers to loop
 * Return: string destiny
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);

}
