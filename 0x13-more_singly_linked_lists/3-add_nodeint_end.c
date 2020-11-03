#include "lists.h"

/**
 * add_nodeint_end - function that added new node in the end
 * @head: pointer to pointer
 * @n: parameter
 * Return: New node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *aux = NULL;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return NULL;

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	for (aux = *head; aux->next != NULL;)
	{
		aux = aux->next;
	}

	aux->next = node;

	return (node);
}