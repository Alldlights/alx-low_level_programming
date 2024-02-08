#include "lists.h"

/**
 * sum_listint - Sums the data in a lined list
 * @head: Pointer to the head node
 * Return: The sum of the list data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
