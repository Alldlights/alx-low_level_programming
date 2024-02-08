#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: pointer to the head node
 * @index: index to get the node starting from 0
 * Return: The nth node index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
