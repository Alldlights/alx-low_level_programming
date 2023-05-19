#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabtes in lower and uppercase
 *
 * Return: Always 0 on Success
 */
int main(void)
{
	char start = 'a';
	char end = 'z';
	char cap_start = 'A';
	char cap_end = 'Z';

	while (start <= end)
	{
		putchar(start);
		start++;
	}
	while (cap_start <= cap_end)
	{
		putchar(cap_start);
		cap_start++;
	}
	putchar('\n');

	return (0);
}
