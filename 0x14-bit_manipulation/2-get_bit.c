#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the decimal number
 * @index: index, starting from 0 of the bit to be gotten
 *
 * Return: The value of the bit at index or -1 if there was an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_idx;

	if (index > 63)
		return (-1);

	bit_idx = (n >> index) & 1;

	return (bit_idx);
}
