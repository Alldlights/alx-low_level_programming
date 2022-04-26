#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a node
 * @head: head node
 * @idx: index
 * @n: integer
 *
 * Return: listint
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *actualNode = *head;
	unsigned int i = 0;

	if (!new)
		return (free(new), NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new);
		return (new);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; i < idx - 1; i++)
	{
		actualNode = actualNode->next;
		if (actualNode == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = actualNode->next;
	actualNode->next = new;

	return (new);
}
