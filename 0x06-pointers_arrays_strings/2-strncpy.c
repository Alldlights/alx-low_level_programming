#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination string to copy to.
 * @src: pointer to the src string to copy from.
 * @n: number of string to copy to destination
 *
 * Return: destination on success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (src[s])
	{
		s++;
	}

	while (d < n && src[d])
	{
		dest[d] = src[d];
		d++;
	}

	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}

