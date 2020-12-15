#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at given position
 * @h: pointer to pointer of head list
 * @idx: value of index
 * @n: number of the node
 * Return:  addres that new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *count;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		count = *h;
		for (i = 0; i < idx - 1 && count != NULL; i++)
			count = count->next;
		if (count == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = count;
		next = count->next;
		count->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
