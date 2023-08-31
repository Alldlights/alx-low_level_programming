#include "main.h"

/**
 * get_bit - returns the vaue of a bit at a given index
 * @n: number to get it bit
 * @index: index of bit to be gotten starting from 0
 *
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
