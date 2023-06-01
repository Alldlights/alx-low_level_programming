#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;

	char l_rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char u_rot[] = "nopqrstuvwxyzabcdefghijKlmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == l_rot[i])
			{
				*s = u_rot[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
