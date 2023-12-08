#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: The head node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
