#include "main.h"

/**
 * clear_bit - sets the vale of a bit to 0 at a given index.
 * @n: pointer to an integer decimal number
 * @index: index of the bit to set starting from 0
 *
 * Return: 1 if succeful 0r -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1UL << index;
	mask = ~mask;

	*n = mask & *n;

	return (1);
}
