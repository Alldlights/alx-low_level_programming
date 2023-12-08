#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node of dlistint_t list
 * @head: The head node
 * @index: The index on the list to return
 * Return: index of the node else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
