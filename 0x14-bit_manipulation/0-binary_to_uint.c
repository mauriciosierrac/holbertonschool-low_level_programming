#include "holberton.h"

/**
 * binary_to_uint - convert string binary in dec
 * @b: pointer to string
 * Return: value in base10
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	int pot = 1, value = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
		;
	for (j = (i - 1); j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] == '1')
		{
			value += 1 * pot;
		}
		pot *= 2;
	}
	return (value);
}
