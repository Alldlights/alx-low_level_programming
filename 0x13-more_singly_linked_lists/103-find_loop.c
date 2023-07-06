#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list
 * @head: pointer pointing to the head node
 *
 * Return: The address of the node where the loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *find_1 = head, *find_2 = head;

	while (find_1 && find_2 && find_2->next)
	{
		find_1 = find_1->next;
		find_2 = find_2->next->next;
		if (find_1 == find_2)
		{
			find_1 = head;
			while (find_1 != find_2)
			{
				find_1 = find_1->next;
				find_2 = find_2->next;
			}
			return (find_1);
		}
	}
	return (NULL);
}
