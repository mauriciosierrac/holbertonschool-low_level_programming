#include "holberton.h"


/**
* _islower - check if some alpha is lower
*
* @c : parameter of 3-main.c
*
* Return: 0 or 1
**/

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
