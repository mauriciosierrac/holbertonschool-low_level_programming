#include "lists.h"

/**
 * sum_listint - function that sum the parameters integer of list
 * @head: pointer to list
 * Return: value of sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	while (head)
	{
		if (head == NULL)
		{
			return (0);
		}
		node = head;
		head = head->next;
		sum += node->n;
	}
	return (sum);
}
