#include "holberton.h"

/**
 * get_endianness - function that print little endian or big endian
 * Return: 1 or 0
 */

int get_endianness(void)
{

	unsigned int x = 1;
	char *c = (char *)&x;

	return ((int)*c);
}
