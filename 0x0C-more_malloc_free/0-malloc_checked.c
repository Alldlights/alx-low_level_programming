#include "main.h"

/**
 * malloc_checked - Function that allocates Memory using Malloc
 * @b: The number of bytes to be allocated
 * Return: A pointer to the allocated memeory
 */
voif *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
