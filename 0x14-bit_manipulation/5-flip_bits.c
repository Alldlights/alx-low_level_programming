#include "main.h"

/**
 * flip_bits - Flips a bit
 * @n: The number
 * @m: the second number
 * Return: The number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count;

	diff = n ^ m;
	count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
