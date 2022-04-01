#include "main.h"

/**
 * _memcpy - copies n bytes from the memory area src
 * to memory area dest
 * @src: source code to copy
 * @dest: parameter for destination to copy to
 * @n: how many bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
