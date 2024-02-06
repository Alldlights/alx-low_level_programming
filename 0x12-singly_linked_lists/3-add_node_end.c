#include "lists.h"

/**
 * add_node_end - Adds a node at the end of the list
 * @head: Pointer to the head of the list
 * @str: string data for the new node
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	char *str_dup;
	int len = 0, i;

	last = *head;
	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	str_dup = malloc(sizeof(char) * (len + 1));
	if (str_dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		str_dup[i] = str[i];
	new->str = str_dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
