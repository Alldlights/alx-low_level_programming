#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: the linked list head
 *
 * Return: the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
