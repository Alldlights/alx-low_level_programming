#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: a pointer to the memory block to be filled
 * @b: value to be set
 * @n: number of bytes to set to the value
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
