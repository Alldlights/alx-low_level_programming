#include "lists.h"

/**
 * sum_dlistint - Sums all that data of a doubly linked list
 * @head: The head node
 * Return: The sum of all the data else 0 for empty list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum_n = 0;

	while (current != NULL)
	{
		sum_n += current->n;
		current = current->next;
	}
	return (sum_n);
}

