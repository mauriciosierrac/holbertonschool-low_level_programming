#include "holberton.h"

/**
 * *_strchr - locate character in a string
 * @s: string
 * @c: char to find
 * Return: character to find and next characters
 *
 **/

char *_strchr(char *s, char c)
{

int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
