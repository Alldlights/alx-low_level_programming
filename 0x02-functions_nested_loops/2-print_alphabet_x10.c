#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 * followed by a new line.
 *
 * Return: nothhing on Success.
 */
void print_alphabet_x10(void)
{
	int i;
	i = 0;

	while (i < 10)
	{
		char start = 'a';
		char end = 'z';

		while (start <= end)
		{
			_putchar(start);
			start++;
		}

		_putchar('\n');
		i++;
	}
	return;
}
