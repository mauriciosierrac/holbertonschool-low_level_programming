#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to copy string
 * @str: string to copy
 * Return: copy to string
 **/

char *_strdup(char *str)
{

char *copy;
unsigned int i, x;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
;

copy = malloc(i + 1);

if (copy == NULL)
{
return (NULL);
}



for (x = 0; str[x] != '\0'; x++)
{
copy[x] = str[x];
}
copy[x] = '\0';
return (copy);

}
