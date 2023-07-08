#include "main.h"

/**
 * binary_to_uint - a function that converts a ninary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: The converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int conver_t = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		conver_t = 2 * conver_t + (b[i] - '0');
		i++;
	}
	return (conver_t);
}
