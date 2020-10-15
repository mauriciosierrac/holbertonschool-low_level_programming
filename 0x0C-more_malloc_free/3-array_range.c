#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - string since min to max
 * @min: integer min
 * @max: integer max
 * Return: string containt min to max
 **/

int *array_range(int min, int max)
{

int *s, i;

if (min > max)
{
return (NULL);
}

s = malloc((max - min + 1) * sizeof(int));

if (s == NULL)
{
return (NULL);
}
for (i = 0; min + i <=  max; i++)
{
s[i] = min + i;
}

return (s);
}
