#include "variadic_functions.h"

/**
 * sum_them_all - Function returns the sum of all its parameter
 * @n: The first argument to the function
 * Return: sum or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
