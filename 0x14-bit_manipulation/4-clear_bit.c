#include "main.h"

/**
 * clear_bit - Set the value of bit to 0 at a given index
 * @n: pointer to an integer
 * @index: index starting from 0 of the bit to set
 * Return: 1 if successful else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	mask = ~(1ul << index);
	*n &= mask;

	return (1);
}
