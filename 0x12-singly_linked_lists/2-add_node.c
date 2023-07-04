#include "lists.h"

/**
 * _strlen - gets the lenght of a string
 * @s: the string
 *
 * Return: the lenght of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node - function that adds new nodes to a list
 * @head: the head of the list
 * @str: string to be added to the node
 *
 * Return: pointer to the current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *new_str;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		new_str[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new->str = new_str;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
