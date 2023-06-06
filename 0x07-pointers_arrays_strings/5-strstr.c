#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string to locate from
 * @needle: pointer to the variable string to locate
 *
 * Return: a pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (b = 0; needle[b] != '\0'; b++)
	{
		;
	}

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
			{
				break;
			}
			
		}
		if (a != b)
		{
			haystack++;
		}
		else
			return (haystack);
	}
	return (NULL);
}
