#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a list
 * @h: Points to the head node
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t num_ele = 0;

	while (current != NULL)
	{
		num_ele++;
		current = current->next;
	}
	return (num_ele);
}
