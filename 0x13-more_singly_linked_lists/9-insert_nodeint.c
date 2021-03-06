#include "lists.h"

/**
 * insert_nodeint_at_index - add other node in N position
 * @head: pointer to pointer list
 * @idx: value to inster in list
 * @n: position to added
 * Return: value of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *node1 = NULL, *node2 = NULL;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	node1 = malloc(sizeof(listint_t));

	if (!node1 || (!(*head) && idx > 0))
		return (NULL);

	node1->n = n;
	if (idx == 0)
	{
		node1->next = *head;
		*head = node1;
		return (node1);
	}

	node2 = *head;

	for (i = 0; node2 && i <= idx; i++)
	{
		if (i == idx - 1)
		{
			node1->next = node2->next;
			node2->next = node1;
			return (node1);
		}
		node2 = node2->next;
	}
	free(node1);
	return (NULL);
}
