#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers in base 16 in lowercase
 * using putchar and followed by a new line
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int n;
	int j;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (j = 0; j < 6; j++)
	{
		putchar('a' + j);
	}
	putchar('\n');

	return (0);
}
