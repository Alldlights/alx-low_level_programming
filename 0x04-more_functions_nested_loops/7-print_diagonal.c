#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times the charcater'\' should be printed.
 * Description: Use only derived _putchar() to print in the program. The
 * diagonal should end in a new line. if n <= 0 the function should print a
 * new line
 *
 * Return: void on success
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
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
