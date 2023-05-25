#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer number to print.
 * Description: You can only use the putchar(), you are not allowd to use the
 * long data type, no use of array or pointers and no har-code special values.
 *
 * Return: void on success
 */

void print_number(int n);
{
	unsigned int hold = n;
	{
		if (n < 0)
		{
			n = n * -1;
			hold = n;
			Putchar('-');
		}

		hold = hold / 10;

		if (hold != 0)
		{
			print_number(hold);
		}
		_putchar((unsigned int) n % 10 + '0);
	}
}
