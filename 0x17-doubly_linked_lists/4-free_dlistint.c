#include "lists.h"

/**
 * free_dlistint -
 *
 * Return: 
 */
void free_dlistint(dlistint_t *head)
{
if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}