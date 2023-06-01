#include "main.h"

/**
 * cap_string - function that captalizes all words of a string based on
 * separators of words: space, tabulation, new line etc.
 * @s: string to convert
 *
 * Return: captalized string
 */

char *cap_string(char *s)
{
	int a = 0, i;
	int spc_c = 13;
	char spc[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < spc_c)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			{
				s[a] -= 32;
			}
			i++;
		}
		a++;
	}
	return (s);
}
