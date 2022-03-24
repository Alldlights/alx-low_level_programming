#include "main.h"

/**
 * print_number - a function to print an integer
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	n = unsigned int;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

