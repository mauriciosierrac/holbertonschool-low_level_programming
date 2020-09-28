#include "holberton.h"

/**
 * _strlen - length of a string
 *
 * @s: variable pointer
 * Return: length of string
 **/

int _strlen(char *s)
{

int y = 0;

while (s[y] != '\0')
{
y++;
}
return (y);
}
