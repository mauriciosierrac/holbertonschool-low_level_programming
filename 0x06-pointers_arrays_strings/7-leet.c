#include "holberton.h"
/**
 * leet - 1337
 * @a: str
 * Return: str
 */

char *leet(char *a)
{
int i, j;
int x[] = {'4', '3', '0', '7', '1', 'a', 'e', 'o', 't', 'l'};

for (i = 0; a[i] != 0; i++)
{
for (j = 5; x[j] != 0; j++)
{
if (a[i] == x[j] || a[i] == (x[j] - 32))
{
a[i] = x[j - 5];
}
}
}
return (a);
}
