#include "hash_tables.h"

/**
 * key_index - calculate key value
 * @key: variable of key value
 * @size: length of matrix
 * Return: key value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
