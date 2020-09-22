#include "holberton.h"

/**
* _isalpha - check alpha or not
*
* @c : parameter of 4-main.c
*
* Return: 1 or 0
*
**/

int _isalpha(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
