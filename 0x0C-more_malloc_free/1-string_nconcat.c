#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenated 2 string
 * @s1: string 1
 * @s2: string 2
 * @n: long of char to concatenated of 2 string
 * Return: string concatenated
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, x, y;


if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
if (n > j)
{
n = j;
}
s = malloc(i + n + 1);
if (s == NULL)
{
return (NULL);
}
for (x = 0; s1[x] != '\0'; x++)
{
s[x] = s1[x];
}
for (y = 0; y < n; y++)
{
s[x + y] = s2[y];
}
s[x + y] = '\0';
return (s);
}
