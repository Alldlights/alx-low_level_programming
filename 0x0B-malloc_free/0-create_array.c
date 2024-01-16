#include "main.h"

/**
 * create_array - Function that creates an array of chars
 * and initilizes it with a specific char.
 * @size: the size of the array
 * @c: The character to initilize into the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
