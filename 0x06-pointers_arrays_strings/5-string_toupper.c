#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters to a string to uppercase.
 * @s: pointer to char param
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
