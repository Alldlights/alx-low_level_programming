#include <stdio.h>

/**
 * main - cause an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*
	 * Description: cause the output to go into an infinte loop
	 * while (i < 10)
	 * {
	 *	putchar(i);
	 * }
	 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
