#include "hash_tables.h"

/**
 * hash_table_print - print the array
 * @ht: has table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, count = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		tmp =  ht->array[index];
		if (tmp)
		{
			while (tmp)
			{
				count++;
				tmp = tmp->next;
			}
		}
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		if (tmp)
		{
			while (tmp)
			{
				printf("'%s' : '%s'", tmp->key, tmp->value);
				if (--count)
					printf(", ");
				tmp = tmp->next;
			}

		}
	}
	printf("}\n");

}
