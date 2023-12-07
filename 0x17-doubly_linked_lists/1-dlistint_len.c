#include "lists.h"

/**
 * dlistint_len - Return the size of elements in a linked list
 * @h: Pointer to the head of the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
