#include "lists.h"

/**
 * pop_listint - Deletes the head node of linked list and return the
 * data in the head node
 * @head: a pointer to the head node pointer
 * Return: The data of the head node, else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (current == NULL)
		return (0);

	data = temp->n;

	*head = (*head)->next;

	free(temp);

	return (data);
}


