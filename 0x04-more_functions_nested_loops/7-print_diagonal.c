#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the number of times the character '\' should be printed
 * Description: only use derived _putchar() to print. if n is 0 or less print a
 * new line.
 *
 * Return: void on success
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('0');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			b = 0;
			while (b < a)
			{
				_putchar(32);
				b++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
