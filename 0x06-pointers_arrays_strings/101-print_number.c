#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: number to print
 * Description: you can only use putchar() to print and no use of long,
 * array or pointers
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		_putchar('-');
		j = -j;
	}
	if ((j / 10) > 0)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
