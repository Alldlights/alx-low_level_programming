#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Function that returns the number of bits needed to flip
 * to get from one number to another
 * @n: First number to flip its bit
 * @m: second number to get to after flipping
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	xor_result = n ^ m;
	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
