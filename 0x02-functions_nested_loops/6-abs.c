#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n : parameter of 6-main.c
 *
 * Return: 0
 *
 **/


int _abs(int n)
{

if (n > 0)
{
return (n);
}
else
if (n == 0)
{
return (n);
}
else
if (n < 0)
{
n = n * -1;
return (n);
}
return (0);
}
