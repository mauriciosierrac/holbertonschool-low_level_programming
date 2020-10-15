#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - create matrix
 * @nmemb: rows
 * @size: column
 * Return: pointer to zero
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *s;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

s = malloc(nmemb * size);

if (s == NULL)
{
return (NULL);
}

for (i = 0; i < nmemb * size; i++)
{
s[i] = 0;
}

return (s);

}
