#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the traingle
 * Description: You can only use the putchar() to print. if size is <=0 the
 * function should print a new line. Use # to print the triangle
 *
 * Return: void on success
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 0;

		while (a < size)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(32);
			}
			for (c = 0; c <= a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
			a++;
		}
	}
}
