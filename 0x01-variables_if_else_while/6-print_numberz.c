#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit of base 10 from 0
 * with no use of chat data type and use of only putchar.
 *
 * Return: always 0 on Success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');

	return (0);
}
