#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: Pointer that points to a pointer which points to the head node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *new;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = new;
	}
	*head = temp;
	return (*head);
}
