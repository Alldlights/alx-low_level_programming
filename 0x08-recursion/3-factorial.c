#include "main.h"

/**
 * factorial - a function hat returns the factorial of a given number
 * @n: the number to get its factorial
 *
 * Return: -1 if n is lower than 0, 1 if n is equals 0 or the factorial of the
 * given number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
