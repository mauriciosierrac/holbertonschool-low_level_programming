#include "holberton.h"

/**
 * get_bit - return value of bit in the index
 * @n: number to convert in binary
 * @index: position in array
 * Return: value of bit or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value = 1;

	if (index >= 64)
	{
		return (-1);
	}
	value <<= index;
	if (value & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
