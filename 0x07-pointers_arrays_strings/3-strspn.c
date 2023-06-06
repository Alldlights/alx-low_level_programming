#include "main.h"

/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: pointer to the string variable
 * @accept: pointer to accepted lenght to be gotten
 *
 * Return: the number of bytes in the initial segment of s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] != ' ')
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
				{
					c++;
				}
			}
		}
		else
		{
			return (c);
		}
		a++;
	}
	return (c);
}
