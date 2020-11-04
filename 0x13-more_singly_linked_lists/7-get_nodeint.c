#include "lists.h"

/**
 * get_nodeint_at_index - function that return N element
 * @head: pointer to list
 * @index: element parameter to print
 * Return: element N of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

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
