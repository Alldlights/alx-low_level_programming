#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - function that searches for any of a set of bytes
 * @s: the pointer to the string variable
 * @accept: pointer to a string that occurs in s in an instance
 *
 * Return: a pointer to the byte in s that matches one in accept, or
 * NULL if no such bytes is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
