#include "main.h"

/**
 * leet - funtion that encodes a string into 1337
 * @s: string to be encoded
 * Description: use only 1 if statement, use 2 loops, don't use the switch
 * statement and ternary operation. Aa, Ee, Oo, Tt and Ll, should be replaced
 * by 4,3,0,7 and 1.
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int a = 0, l = 5, i;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		for (i = 0; i < l; i++)
		{
			if (s[a] == r[i] || s[a] - 32 == r[i])
			{
				s[a] = n[i];
			}
		}
		a++;
	}
	return (s);
}
