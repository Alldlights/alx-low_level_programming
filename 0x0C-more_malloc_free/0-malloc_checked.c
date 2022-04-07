#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * if malloc fails, the function should cause normal
 * process termination with a status value of 98.
 * @b: unsigned int memory size to allocate.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
