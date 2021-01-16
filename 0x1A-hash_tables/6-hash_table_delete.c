#include "hash_tables.h"

/**
 * hash_table_delete - delete has table
 * @ht: hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			while (ht->array[index])
			{
				tmp = ht->array[index]->next;
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				free(ht->array[index]);
				ht->array[index] = tmp;
			}
			free(ht->array[index]);
		}
	}
	free(ht->array);
	free(ht);
}
