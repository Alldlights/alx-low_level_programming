#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a linked
 * list
 * @head: a pointer that points to a pointer that points to the head node
 * @n: the numbers on the list
 *
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
