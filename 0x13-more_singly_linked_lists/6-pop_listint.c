#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: A pointer that points to a pointer that points to the head node
 *
 * Return: The head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int num;

	if (!*head)
		return (0);

	num =  (*head)->n;
	*head = new->next;
	free(new);
	return (num);
}
