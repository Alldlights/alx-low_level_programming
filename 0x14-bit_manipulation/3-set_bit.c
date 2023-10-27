#include "main.h"
#include <stdio.h>

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number to set its bit
 * @index: index starting from 0 of the bit to set
 *
 * Return: 1 on success else -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
