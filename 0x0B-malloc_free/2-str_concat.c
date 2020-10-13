#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function to concatenated 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: string concatenated
 **/

char *str_concat(char *s1, char *s2)
{

unsigned int a, b, c, d;
char *conc;

if (s1 == NULL || s2 == NULL)
{
return ('\0');
}

for (a = 0; s1[a] != '\0'; a++)
;

for (b = 0; s2[b] != '\0'; b++)
;

conc = malloc((a + 1) + (b + 1));
if (conc == NULL)
{
return (NULL);
}

for (c = 0; s1[c] != '\0'; c++)
{
conc[c] = s1[c];
}
for (d = 0; s2[d] != '\0'; d++)
{
conc[c + d] = s2[d];
}

return (conc);

}
