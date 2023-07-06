#include "lists.h"

/**
 * get_nodeint_at_index - funtion that returns the nth node of a linked list
 * @head: pointer to the head node
 * @index : the index of the node starting at 0
 *
 * Return: The nth node of the list or NULL if node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = *head;
	unsigned int i;

	if (!head)
		return (0);
	for (i = 0; new; i++)
	{
		if (i == index)
			return (new);
		new = new->next;
	}
	return (NULL);
}
