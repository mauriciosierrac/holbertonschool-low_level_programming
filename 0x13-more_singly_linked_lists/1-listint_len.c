#include "lists.h"

/**
 * listint_len - print the length of list
 * @h: pointer to list
 * Return: length of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
		{
			return (-1);
		}
		h = h->next;
		i++;
	}
	return (i);
}
