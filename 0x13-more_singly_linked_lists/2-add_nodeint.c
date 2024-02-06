#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Points to a pointer to the head node
 * @n: interger to the list
 * Return: Address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
