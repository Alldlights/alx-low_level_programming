#include "lists.h"

/**
 * list_len - Function that returns the number of elements in list
 * @h: the node containing the elements
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
