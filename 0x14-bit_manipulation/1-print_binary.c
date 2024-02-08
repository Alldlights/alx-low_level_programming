#include "main.h"

/**
 * print_binary - Function that prints the binary rep of a number
 * @n: integer to get its binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int i, size, printed;

	size = sizeof(unsigned long int) * 8;
	printed = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		bit = n & (1ul << i);
		if (bit)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
			_putchar('0');
	}
}
