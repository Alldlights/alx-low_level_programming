#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: pointer to the string variable
 *
 * Return: void
 */

void rev_string(char *s)
{
	int le_n, i, half;
	char tmp;

	for (le_n = 0; s[le_n] != '\0'; le_n++)
	{
		;
	}
	i = 0;
	half = le_n / 2;
	while (half--)
	{
		tmp = s[le_n - i - 1];
		s[le_n - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}
