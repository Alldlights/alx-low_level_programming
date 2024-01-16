#include "main.h"
#include <string.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: First string
 * @s2: second string
 * Return: Pointer to the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t length, i, j;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	length = strlen(s1) + strlen(s2);
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for (j = 0; j < strlen(s2); j++)
		ptr[i + j] = s2[j];
	return (ptr);
}

