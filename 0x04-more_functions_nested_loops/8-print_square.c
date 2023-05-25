#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size of the sqaure to be printed.
 * Description: You can ony use putchar() to print. If size is <= 0, the
 * function should print only a new line. Use # to print the square.
 *
 * Return: void on success.
 */

void print_square(int size)
{
	int row, coln;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = 0;

		while (row < size)
		{
			for (coln = 0; coln <= size; coln++)
			{
				_putchar(35);
			}
			_putchar('\n');
			row++;
		}
	}
}
