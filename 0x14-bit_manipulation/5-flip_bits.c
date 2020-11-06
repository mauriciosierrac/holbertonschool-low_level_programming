#include "holberton.h"

/**
 * flip_bits - print who bits needed to convert a num in another num
 * @n: first number
 * @m: second numbe
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0;
	unsigned long int i = n ^ m;

	while (i)
	{
		bits += i & 1;
		i = i >> 1;
	}

	return (bits);
}
