#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y.
 * @x: number to be squared
 * @y: power of x to be squared
 * Return: retult x**y
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
