#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Points to the head node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
