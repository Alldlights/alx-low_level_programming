#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data(n) in linked
 * list
 * @head: Pointer that points to the head of the node
 *
 * Return: 0 if list is empty else the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		sum += head->n;
		return (sum);
	}
	return (sum);
}
