#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node at index of a
 * of a linked list
 * @head: pointer that points to a pointer which is pointing to the head node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if succeeded or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new = *head;
	listint_t *temp;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (new)
	{
		if (i == index - 1)
		{
			temp = new->next;
			new->next = temp->next;
			free(temp);
			return (1);
		}
		new = new->next, i++;
	}
	return (-1);
}
