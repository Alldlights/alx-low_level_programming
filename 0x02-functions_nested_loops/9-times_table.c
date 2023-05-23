#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0.
 *
 * Return: nothing on success
 */
void times_table(void)
{
	int row, coln, nums;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (coln = 1; coln < 10; coln++)
		{
			nums = (row * coln);
			if ((nums / 10) > 0)
			{
				_putchar((nums / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((nums % 10) + '0');

			if (coln < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

