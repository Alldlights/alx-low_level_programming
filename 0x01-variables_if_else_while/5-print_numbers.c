#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers of base 10 from 0 in a new line
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
