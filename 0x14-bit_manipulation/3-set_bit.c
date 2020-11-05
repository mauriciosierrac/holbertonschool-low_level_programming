#include "holberton.h"

/**
 * set_bit - replace a bit in te position index
 * @n: pointer to integer
 * @index: position to change
 * Return: 1 or -1 if false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index >= 64)
	{
		return (-1);
	}

	bit <<= index;

	*n = (*n | bit);
	return (1);
}
