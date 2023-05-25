#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character '_' should be printed.
 * Description: you can only use the derived _putchar() to print and 
 * the lines hould end in a new line. if n is 0 or less print a new line
 *
 * Return: void on sucess
 */

void print_line(int n)
{
	int c;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
