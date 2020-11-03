#include "lists.h"

/**
 * add_nodeint - function that add new node in beggining
 * @head: pointer of pointer list
 * Return: element N of node
 * @n: parameter
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Node;

	Node = malloc(sizeof(listint_t));

	if (n == '\0' || Node == NULL)
	{
		return (NULL);
	}
	Node->n = n;

	Node->next = *head;
	*head = Node;

	return (Node);
}
