#include "main.h"

/**
 * print_binary - function that print the binary representation of a number
 * @n: decimal number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			leading_zero = 0;
			_putchar('1');
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
