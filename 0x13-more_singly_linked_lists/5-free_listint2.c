#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list and sets the head
 * to NULL
 * @head: A pointer that points to a pointer which points to the head node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
