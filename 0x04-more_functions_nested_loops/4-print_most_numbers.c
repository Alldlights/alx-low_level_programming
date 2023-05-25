#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9 in a new line
 * Description: Do not print 2 and 4. You are allowed to use derived
 * _putchar() function twice only.
 *
 * Return: void on success
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
