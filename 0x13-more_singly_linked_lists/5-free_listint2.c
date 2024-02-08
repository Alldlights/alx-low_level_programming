#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head node to NULL
 * @head: Points to a pointer to the head
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		if (next != NULL)
			current = next;
		else
			break;
	}
	*head = NULL;
}
