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
		if (n > 0)
		{
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(-n % 10 + '0');
		}
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n >= 0))
	{
		_putchar(n % 10 + '0');
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
	{
		_putchar('-');
		_putchar(-n % 10 + '0');
	}
}
