#include "lists.h"

/**
 * print_listint - print the elements of list and numbers of nodes
 * @h: pointer to list
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			return (-1);
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		i++;
	}
	return (i);
}
