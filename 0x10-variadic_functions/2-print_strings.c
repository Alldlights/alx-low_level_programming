#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	const char *msg = "(nil)";
	const char *msg_ptr;
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL && *str != '\0')
		{
			while (*str != '\0')
			{
				_putchar(*str);
				str++;
			}
		}
		else
		{
			msg_ptr = msg;
			while (*msg_ptr != '\0')
			{
				_putchar(*msg_ptr);
				msg_ptr++;
			}
		}
		if (i < n - 1 && separator != NULL)
		{
			_putchar(*separator);
			_putchar(' ');
			separator++;
		}
	}
	va_end(args);
	_putchar('\n');
}

