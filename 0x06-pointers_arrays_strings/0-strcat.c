#include "holberton.h"

/**
 * _strcat - concatenates two string
 *
 * @dest: variable
 * @src: variable
 * Return: the string concatenates
 **/

char *_strcat(char *dest, char *src)
{

int i, j;

for (j = 0; dest[j] != '\0'; j++)
;

for (i = 0; src[i] != '\0'; i++)
{
dest[j + i] =  src[i];
}

dest[j + i]  = '\0';

return (dest);

}
