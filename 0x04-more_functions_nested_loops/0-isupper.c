#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: the charcater to check
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
