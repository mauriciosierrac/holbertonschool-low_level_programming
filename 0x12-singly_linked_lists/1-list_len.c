#include "lists.h"

/**
 * list_len - length of linked list
 * @h: pointer to list
 * Return: numbers of elements
 */
size_t list_len(const list_t *h)
{
int n;

while (h != NULL)
{
	h = h->next;
	n++;
}
return (n);
}
