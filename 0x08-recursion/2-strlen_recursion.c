#include "holberton.h"

/**
 * _strlen_recursion - print lenght of the string
 * @s: string
 * Return: zero
 **/

int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i =  _strlen_recursion(s + 1);
return (i + 1);
}
else
{
return (0);
}
}
