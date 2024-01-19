#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Unsigned integer for the amount of bytes of memory needed
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(*ptr) *b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
