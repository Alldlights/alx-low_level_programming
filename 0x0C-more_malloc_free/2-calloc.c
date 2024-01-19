#include "main.h"

/**
 * _calloc - Function that allocates memory for an array, using
 * malloc
 * @nmemb: Array size of memeory to alocate
 * @size: size of the data type in bytes to allocate
 * Return: Pointer to the alocated memory, setting it to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *byte_ptr;
	size_t i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	byte_ptr = ptr;
	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;
	return (ptr);
}

