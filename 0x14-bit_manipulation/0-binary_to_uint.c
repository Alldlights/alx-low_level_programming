#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: variable pointing to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if
 * there is one or more chars in b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert;
	unsigned int bit;
	size_t i;

	convert = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			convert  <<= 1;
			bit = b[i] - '0';
			convert |= bit;
		}
		else
			return (0);
	}
	return (convert);
}
