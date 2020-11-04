#include "lists.h"

/**
 * pop_listint - delete main node
 * @head: pointer to pointer list
 * Return: value of list
 */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int value = 0;

	if (*head)
	{
		node =
		    node->next = (*head)->next;
		value = (*head)->n;
		free(*head);
		*head = node;
	}
	return (value);
}
