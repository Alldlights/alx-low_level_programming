#include "main.h"

/**
 * _strlen - prints the lenght of char pointer.
 * @s: pointer to character array.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
