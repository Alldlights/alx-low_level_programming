#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to a pointer of the head node
 * @n: The data to parse to the list
 * Return: The address of the new element else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
