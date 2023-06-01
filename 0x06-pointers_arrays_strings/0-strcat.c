#include "main.h"

/**
 *  _strcat - function that concatenates two strings
 * @dest: pointer to destination string to be appended
 * @src: pointer to source string to append to.
 *
 * Return: pointer to the resulting destination string
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
