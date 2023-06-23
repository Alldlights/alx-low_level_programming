#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Retunr: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strn;
	unsigned int i;
	char *ptr;

	va_start(strn, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strn, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}

