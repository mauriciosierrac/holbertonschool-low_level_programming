#include "lists.h"

/**
 * print_list - function that print linked list
 * @h: pointer to list
 * Return: length and all elements of linked list
 */

size_t print_list(const list_t *h)
{

	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}

	return (n);

}
