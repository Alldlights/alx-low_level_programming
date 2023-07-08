#include "main.h"

/**
 * print_binary - funtion that prints binary representation of a number
 * @n: the decimal number
 *
 * Retrun: Nothing
 */
void print_binary(unsigned long int n);
{
	int i = 63, increment = 0;
	unsigned long int binary_num;

	while (i >= 0)
	{
		binary_num = n >> i;
		if (current & i)
		{
			_putchar('1');
			increment++:
		}
		else if (increment)
		{
			_putchar('0');
		}
		i--;
	}
	if (!increment)
	{
		_putchar('0');
	}
}
