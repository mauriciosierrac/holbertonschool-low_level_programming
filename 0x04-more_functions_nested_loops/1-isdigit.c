#include "holberton.h"

/**
 * _isdigit - check if a char is a number
 * @c: variable of 1-main.c
 * Return: value 1 or 0
 **/


int _isdigit(int c)
{

int res;

if (c >= '0' && c <= '9')
{
res = 1;
}
else
{
res = 0;
}

return (res);
}
