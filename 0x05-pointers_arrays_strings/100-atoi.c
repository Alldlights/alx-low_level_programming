#include "main.h"

/**
 * _atoi - function that converts a string to an integer.
 * @s: pointer to the varible
 *
 * Return: 0 if no number in string else return the converted number
 *
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
	} while (*s++);

	return (num * sign);
}
