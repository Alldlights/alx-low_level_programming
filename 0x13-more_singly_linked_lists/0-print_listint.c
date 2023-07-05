#include "lists.h"
#include <stddef.h>
/**
 * print_listint - function that prints all the elements of a linked list
 * @h: pointer to the linked list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next, i++;
	}
	return (i);
}
