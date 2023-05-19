#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase alphabets in reverse in a new line
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char char_1 = 'a';
	char char_2 = 'z';

	while (char_1 <= char_2)
	{
		putchar(char_2);
		char_2--;
	}
	putchar('\n');

	return (0);
}
