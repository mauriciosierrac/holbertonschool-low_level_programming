#include "hash_tables.h"

/**
 * hash_table_create - that function create a new node
 * @size: length of the table
 * Return: a new node
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->array = calloc(size, sizeof(hash_node_t *));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->size = size;
	return (new);
}
