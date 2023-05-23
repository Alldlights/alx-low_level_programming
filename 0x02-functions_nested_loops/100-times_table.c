#include "main.h"

/**
 * print_times_table - print the n times table from 0
 * @n: integer value to start from
 *
 * Return: nothing on success
 */
void print_times_table(int n)
{
	int row, coln, product;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (coln = 0; coln <= n; coln++)
			{
				product = row * coln;

				if (coln == 0)
				{
					_putchar('0');
				}
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
