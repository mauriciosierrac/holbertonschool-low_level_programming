#include "holberton.h"

/**
* root -  function sqrt
* @x: integer
* @y:  integer
* Return: value of sqrt
**/

int root(int x, int y)
{
if ((y * y) < x)
{
return (root(x, y + 1));
}
else
if ((y * y) > x)
{
return (-1);
}
else
{
return (y);
}
}


/**
 * _sqrt_recursion - print number sqrt
 * @n: integer
 * Return: value of sqrt
 **/

int _sqrt_recursion(int n)
{
return (root(n, 1));
}
