#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Function that returns the number
 * of elements in a linked list.
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
		h = h->next, i++;
	return (i);
}
