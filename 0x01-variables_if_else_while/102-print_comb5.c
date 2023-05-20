#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations for two two-digit numbers
 * Range from 0 to 99, numbers seperated by space.
 * use only putchar() function to display output
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
