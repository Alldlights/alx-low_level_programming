#include "lists.h"

/**
 * add_dnodeint_end - Adds a new  node at the end of a dlistint_t list
 * @head: Pointer to a pointer of the head node
 * @n: The Date parsed to the node
 * Return: address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;

		last->next = new;
		new->prev = last;
	}
	return (new);
}
