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
		_putchar('_');
		print_number(-(unsigned int)n);
	}
	else
		print_number(n);
	_putchar('\n');
}
