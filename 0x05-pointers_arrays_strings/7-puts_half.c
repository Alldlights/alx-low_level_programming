#include "main.h"

/**
 * puts_half - function that prints half of a string, follwed by a new line
 * @str: pointer to the string variable
 * Description: Function should print second half of string.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

