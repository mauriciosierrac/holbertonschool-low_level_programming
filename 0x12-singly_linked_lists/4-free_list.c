#include "lists.h"

/**
 * free_list - funciont that free a list
 * @head: pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
