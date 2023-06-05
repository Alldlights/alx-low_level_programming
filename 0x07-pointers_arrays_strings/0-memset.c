#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to memory area.
 * @b: constant byte
 * @n: number of times to input byte
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
