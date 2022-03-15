#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet in lowercase.
 * Return - 0
 */
void print_alphabet(void)
{
	char text = 'a';

	while (text <= 'z')
	{
		_putchar(text);
		text++;
	}
	_putchar('\n');
}
