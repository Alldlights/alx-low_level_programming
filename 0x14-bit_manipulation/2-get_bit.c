#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the number to convert
 * @index: the index starting from 0 of the converted bit
 *
 * Return: value of the bit at index 0r -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (n & mask) ? 1 : 0;
}


