#include "hash_tables.h"

/**
 * hash_djb2 - that function create a new node
 * @str: length of the matrix
 * Return: a new node
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
