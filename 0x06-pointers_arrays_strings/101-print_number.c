#include "main.h"

/**
 * print_number - a function to print an integer
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	if (n / 10 != 0)
	{
		_putchar(n % 10);
		print_number((i - i % 10) / 10);
	}
	else if ((i / 10 == 0) && (i % 10 != 0) && (i > 0))
		_putchar(i % 10);
	else if ((i / 10 == 0) && (i % 10 != 0) && (i <= 0))
		_putchar(-i % 10);
}
