#include "main.h"
#include <stdio.h>

/**
 * count_set_bits - function that gets the number of bits needed to flip
 * @num: num of bits needed to flip
 *
 * Return: num of bits needed to flip
 */
unsigned int count_set_bits(unsigned long int num)
{
	unsigned int count;

	count = 0;

	while (num)
	{
		num &= (num - 1);
		count++;
	}
	return (count);
}

/**
 * flip_bits - a function that returns the number of bits needed to flip
 * to get ome number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;

	diff = n ^ m;

	return (count_set_bits(diff));
}
