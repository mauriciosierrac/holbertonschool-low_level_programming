#include "lists.h"

/**
 * add_node_end - function that create a new node un end list
 * @head: pointer to pointer
 * @str: string
 * Return: new node or null
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *Node, *Node2;
	int i;

	Node = malloc(sizeof(list_t));

	if (Node == NULL)
	{
		return (NULL);
	}

	if (*head != NULL)
	{
		Node2 = *head;
		for (i = 0; Node2->next != NULL; i++)
		{
			Node2 = Node2->next;
		}
		Node2->next = Node;
	}
	else
		*head = Node;

	Node->next = NULL;
	Node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;

	Node->len = i;

	return (Node);
}
