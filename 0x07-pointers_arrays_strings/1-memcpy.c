#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to varibale to copy into
 * @src: pointer to the source variable to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
