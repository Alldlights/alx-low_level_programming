#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a list
 * @head: Points to a pointer to the head node
 * @n: Integer variable of the list
 * Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
