#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the ned of a linked list
 * @head: a pointer that points to a pointer that points to the head node
 * @n: the elements to add to the list(numbers)
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *last = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (!(*head))
	{
		*head = temp;
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = temp;
	}
	return (*head);
}

