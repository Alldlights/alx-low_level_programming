#include "lists.h"
/**
 * free_listint - Function that frees a list
 * @head: pointer
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
