#include "main.h"
#include <stdlib.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the string variable
 * @c: character to locate in the string
 *
 * Return: First occurance of the character in the string or NULL if otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
