#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: The list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t len_node = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		len_node++;
		current = current->next;

	}
	return (len_node);
}
