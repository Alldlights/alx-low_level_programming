#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: pointer to the head of the list
 * Return: Nothing
 *
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
