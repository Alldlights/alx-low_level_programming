#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible digit in base 10with a ','
 *
 * Return: Always 0 on sucess
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
