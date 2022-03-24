#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: unsigned integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-(unsigned int)n);
	}
	else
		print_number(n);
	_putchar('\n');
}
