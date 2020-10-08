#include "holberton.h"

/**
 * prime - function
 * @x: integer
 * @y: integer
 * Return: 1 or 0
 **/

int prime(int x, int y)
{

if ((x % y ==  0 && y < x) || x < 2)
{
return (0);
}
else if (x % y == 0 && y == x)
{
return (1);
}
else
{
return (prime(x, y + 1));
}
}

/**
 * is_prime_number - function main
 * @n: integer
 * Return: function prime
 **/

int is_prime_number(int n)
{
return (prime(n, 2));
}
