#include "main.h"
#include <string.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated
 * space in memory which contains a str copy as a parameter
 * @str: The str to duplicate
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * strlen(str) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(str) + 1; i++)
		ptr[i] = str[i];
	return (ptr);
}
