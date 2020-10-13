#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to print array
 * @size: size of array
 * @c: char to array
 * Return: string
 **/

char *create_array(unsigned int size, char c)
{

char *s;
unsigned int i;

s = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
