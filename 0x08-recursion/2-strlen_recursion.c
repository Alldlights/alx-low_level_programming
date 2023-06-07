#include "main.h"

/**
 * _strlen_recursion - a function that prints the lenght of a string
 * @s: The string to be printed
 *
 * Return: the lenght of string in numbers
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
