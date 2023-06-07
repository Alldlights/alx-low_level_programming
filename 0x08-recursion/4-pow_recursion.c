#include "main.h"

/**
 * _pow_recursion - a funtion that retunrs the value of x raised to y.
 * @x: base number
 * @y: number to the power of x
 *
 * Return: -1 if y is less than 0, 1 if y is equals 0 else the value of the
 * base number to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
