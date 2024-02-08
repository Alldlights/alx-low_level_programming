#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at an index on a linked list
 * @head: points to a head pointer
 * @index: index where to delete a node starting from 0;
 * Return: 1 on success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	free(temp);
	return (1);
}
