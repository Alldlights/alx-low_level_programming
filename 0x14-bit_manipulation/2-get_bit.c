#include "main.h"

/**
 * get_bit - Return the value of a bit at an index
 * @n: The unsigned long int number
 * @index: The index, starting from 0 of the bit to get
 * Return: Value of the bit at index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1ul << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
