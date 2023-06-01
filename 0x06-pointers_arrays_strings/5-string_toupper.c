#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase.
 * @s: string to be converted
 *
 * Return: converted string
 */

char *string_toupper(char *s)
{
	int n;

	for (n = 0; n < s[n]; n++)
	{
		if (s[n] >= 97 && s[n] <= 122)
		{
			s[n] -= 32;
		}
	}
	return (s);
}
