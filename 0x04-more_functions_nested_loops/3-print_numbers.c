#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9 in a new line
 * Description: you can only use derived _putchar() twice
 *
 * Return: void on success
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
