#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		h = h->next, nodes++;
	}
	return (nodes);
}
