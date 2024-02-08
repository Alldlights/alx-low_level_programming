#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given position
 * @head: points to a head pointer
 * @idx: index to add new node starting from 0
 * @n: integer variable of the new node
 * Return: The address of the new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i = 0;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL || current->next == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
	
