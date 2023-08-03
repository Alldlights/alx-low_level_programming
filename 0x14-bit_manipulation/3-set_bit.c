#include "main.h"

/**
 * set_bit - function that sets the value of a but to 1 at a given index
 * @n: points to the bit to set value
 * @index: index, starting from 0 of the bit to be set
 *
 * Return: 1 on success, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1UL << index;
	*n |= mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (1);
}
