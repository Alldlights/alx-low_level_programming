#include "variadic_functions.h"

/**
 * print_numbers - A funtion that prints numbers, followed by new line
 * @separator: The string to be printed between the numbers
 * @n: the number of integers passed to the function
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, unsigned int);
		printf("%d", j);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
