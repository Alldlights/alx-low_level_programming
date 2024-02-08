#include "main.h"

/**
 * binary_to_uint - Function that converts a binary num to an unsigned int
 * @b: Pointer to a string of 0 and 1 character
 *
 * Return: The converted number or 0 if the string doesn't contain a
 * 0 and 1 also when b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
