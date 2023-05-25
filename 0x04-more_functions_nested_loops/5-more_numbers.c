#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 - 14
 * in a new line. You are to use the derived _putchar() 3 times.
 *
 * Return: void on success
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
