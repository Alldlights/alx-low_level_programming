#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number to print its binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int shift;
	int leading_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (shift = sizeof(n) * 8 - 1; shift >= 0; shift--)
	{
		mask = 1UL << shift;
		if (n & mask)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
	}
}
