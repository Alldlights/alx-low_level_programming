#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: Head node
 * @str: string data on the node
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *str_dup;
	int len = 0, i;

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
	new->next = *head;

	*head = new;

	return (new);
}
