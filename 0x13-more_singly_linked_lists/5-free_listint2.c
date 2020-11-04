#include "lists.h"

/**
 * free_listint2 - function that free list
 * @head: pointer to pointer
 * Return: NOTHING o null
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		node = *head;
		*head = node->next;
		free(node);
	}

	*head = NULL;
}
