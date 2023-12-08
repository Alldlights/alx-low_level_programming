#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index of a dlistint_t list
 * @head: Pointer to the head node of the List
 * @index: The index of the list where to delete a node
 * Return: 1 if succesful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;
	if (current == NULL)
		return (-1);
	tmp = current->prev;
	tmp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;
	free(current);
	return (1);
}
