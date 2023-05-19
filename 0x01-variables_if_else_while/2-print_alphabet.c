#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in lowercase in a new line
 *
 * Return: Always 0 on Success
 */
int main(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}
