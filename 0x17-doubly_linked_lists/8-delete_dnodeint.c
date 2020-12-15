#include "lists.h"

/**
 * delete_dnodeint_at_index - delete element
 * @head: pointer to pointer of head list
 * @index: value that index
 * Return: addres of the new element in the list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *h;
	unsigned int count = 0;

	del = *head;
	if (del == NULL)
		return (-1);
	while (count < index && del != NULL)
	{
		h = del, del = del->next;
		count++;
	}
	if (del != NULL)
	{
		free(del);
		del = del->next;
		if (count != 0)
		{
			if (del != NULL)
				del->prev = h;
			h->next = del;
		}
		else
		{
			if (del != NULL)
				del->prev = NULL;
			*head = del;
		}
		return (1);
	}
	return (-1);
}
