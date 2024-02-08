#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at an index
 * @n: Pointer to the integer
 * @index: Index starting from 0 of the bit to set
 * Return: 1 if successful else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1ul << index;
	*n |=  mask;

	return (1);
}
