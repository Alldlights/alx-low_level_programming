#include "main.h"

/**
 * print_binary - funtion that prints binary representation of a number
 * @n: the decimal number
 *
 * Retrun: Nothing
 */
void print_binary(unsigned long int n)
{
	int i, increment = 0;
	unsigned long int binary_num;

	for (i = 63; i >= 0; i--)
	{
		binary_num = n >> i;

		if (binary_num & 1)
		{
			_putchar('1');
			increment++;
		}
		else if (increment)
		{
			_putchar('0');
		}
	}
	if (!increment)
		_putchar('0');
}
