#include "holberton.h"

/**
 * clear_bit - replace a bit in the position
 * @n: pointer to integer
 * @index: position
 * Return: 1 or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index >= 64)
	{
		return (-1);
	}

	bit <<= index;

	*n = (*n & ~bit);
	return (1);
}