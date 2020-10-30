#include "lists.h"

/**
 * add_node - add a new Node in the beginning
 * @head: pointer to pointer
 * @str: string to add in the new node
 * Return: new element
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *Node;
	int i;

	Node = malloc(sizeof(list_t));

	if (str == NULL || Node == NULL)
{
		return (NULL);
}
		Node->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;

	Node->len = i;
	Node->next = *head;
	*head = Node;

	return (Node);
}
