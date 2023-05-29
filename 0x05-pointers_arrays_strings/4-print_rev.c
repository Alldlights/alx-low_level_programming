#include "main.h"

/**
 * print_rev - function that prints a string in reverse folloed by a new line
 * @s: the pointer to string variable
 *
 * Return: void
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (l -= 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
