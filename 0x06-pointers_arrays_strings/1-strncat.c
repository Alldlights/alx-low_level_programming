#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to destination string to be appened to
 * @src: pointer to the source string to append from.
 * @n: number of string to be concatenated from src to dest.
 * Description: this function will use most of the n bytes from src.
 *
 * Return: a pointer to the resulting destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	for (d = 0; dest[d] != '\0'; d++)
	{
		;
	}

	for (s = 0; src[s] != '\0' && s < n; s++)
	{
		dest[d + s] = src[s];
	}
	dest[d + s] = '\0';
	return (dest);
}
