#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: character with ASCII value
 *
 * Return: 1 if n is greater than zero
 * else if n is zero return 0
 * otherwise return -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
