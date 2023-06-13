#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a fucntion that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string parameter
 *
 * Return: NULL if str is NULL, returns the pointer to the str copy on success
 * else returns NULL if insufficient memory is detcted.
 */
char *_strdup(char *str)
{
	int b = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (b < i)
	{
		s[b] = str[b];
		b++;
	}
	s[b] = '\0';
	return (s);
}
