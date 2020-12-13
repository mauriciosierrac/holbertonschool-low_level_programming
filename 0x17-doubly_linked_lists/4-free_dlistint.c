#include "lists.h"

/**
 * free_dlistint - function free memory allocated
 * @head: pointer to list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
