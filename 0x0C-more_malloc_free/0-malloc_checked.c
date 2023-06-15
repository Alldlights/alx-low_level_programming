#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocated memory using malloc
 * @b: unsigned int to allocated memory to
 *
 * Return: pointer to the allocated memeory
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);

	if (new == NULL)
		exit(98);
	return (new);
}
