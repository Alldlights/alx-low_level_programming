#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: the binary number array
 *
 * Return: converted number or 0 if b is NULL or not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else
		{
			result = (result << 1) + (b[i] - '0');
		}
	}
	return (result);
}
