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

for (i = 0; str[i] != '\0'; i++)
;
copy = malloc(i * sizeof(str));

if (copy == NULL)
{
return (NULL);
}


if (str == NULL)
{
return (NULL);
}

for (x = 0; str[x] != '\0'; x++)
{
copy[x] = str[x];
}

return (copy);

}
