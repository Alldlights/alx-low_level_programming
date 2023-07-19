#include "main.h"

/**
 * flip_bits - A function that returns the number of bits needed to flip to
 * get from one number to another
 * @n: First number to flip
 * @m: second number to flip
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current_num;
	unsigned long int xResult = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_num = xResult >> i;
		if (current_num & 1)
			count++;
	}

	return (count);
}

