#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to the string variable
 *
 * Return: lenght of the string variable
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
