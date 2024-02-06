#include "lists.h"

/**
 * print_listint - Funtion that prints elements of a linked list
 * @h: Points to the head node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t num_node = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		num_node++;
		current = current->next;
	}
	return (num_node);
}
