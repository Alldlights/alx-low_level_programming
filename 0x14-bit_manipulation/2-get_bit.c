#include "main.h"
#include <stdio.h>

/**
 * get_bit - Funtion that returns the value of a bit at a given index
 * @n: number to get its bit
 * @index: index starting from 0 of the bit to get
 *
 * Return: the value of the bit at the index specified or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}
