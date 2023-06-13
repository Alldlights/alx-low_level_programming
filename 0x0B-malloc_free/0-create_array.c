#include "main.h"
#include <stdlib.h>

/**
 * create_array -a function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array
 * @c: character to initialize
 *
 * Return: a pointer to the array else NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
