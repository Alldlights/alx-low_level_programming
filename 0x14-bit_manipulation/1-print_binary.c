#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: unsigned integer number to be converted
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_mask;
	int leading_zeros;

	bit_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	leading_zeros = 1;

	while (bit_mask > 0)
	{
		if (n & bit_mask)
		{
			leading_zeros = 0;
			_putchar('1');
		}
		else
		{
			if (!leading_zeros)
				_putchar('0');

		}
		bit_mask >>= 1;
	}

	if (leading_zeros)
	{
		_putchar('0');
	}
}
