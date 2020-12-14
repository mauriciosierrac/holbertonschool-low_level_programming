#include "lists.h"

/**
 * sum_dlistint - function that sum the parameters of list
 * @head: pointer to list
 * Return: value of sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int add = 0;

	while (head)
	{
		if (head == NULL)
		{
			return (0);
		}
		node = head;
		head = head->next;
		add += node->n;
	}
	return (add);
}
