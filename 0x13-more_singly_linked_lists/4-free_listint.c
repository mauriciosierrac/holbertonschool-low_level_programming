#include "lists.h"

/**
 * free_listint - function that free memory allocated
 * @head: pointer to node
 * Return: nothing
 */
void free_listint(listint_t *head)
{

	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
