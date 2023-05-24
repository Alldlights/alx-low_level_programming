#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: nothing on success.
 */
void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
