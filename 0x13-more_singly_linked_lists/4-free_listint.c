#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 * @head: pointer that points to the nead node of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
