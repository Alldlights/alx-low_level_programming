#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar(0x2D);
		n = -n;
	}

	if (n > 9)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');

	return (0);
}
