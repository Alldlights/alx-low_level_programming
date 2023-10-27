#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: number to set its bit
 * @index: index starting from 0 of bit to set
 *
 * Return: 1 on success else -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
