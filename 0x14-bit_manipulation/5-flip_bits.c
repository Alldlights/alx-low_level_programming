#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: first number to get its bit
 * @m: second number to get bit to flip
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int result = n ^ m;

	while (result > 0)
	{
		flip = flip + (result & 1);
		result = result >> 1;
	}

	return (flip);
}
