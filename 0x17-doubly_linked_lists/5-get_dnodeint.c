#include "lists.h"

/**
 * get_dnodeint_at_index - return N element
 * @head: pointer to list
 * @index: element parameter to print
 * Return: elemen N of list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}

	while (i <= index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		node = head;
		head = head->next;
		i++;
	}
	return (node);
}
