#include "main.h"

/**
 * puts2 - function that prints every character of a string from the first
 * character. use putchar() to print even numbers from the string.
 * @str: pointer to the string variable
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
