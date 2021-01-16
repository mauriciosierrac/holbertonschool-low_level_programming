#include "hash_tables.h"

/**
 * hash_table_get - return value of key
 * @ht: has table
 * @key: key value
 * Return: nothing
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	int index;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
