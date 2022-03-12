#include <stdio.h>
/**
 * main - main block
 * Description: Prints all the possible different combinations of three digits
 * The three digits are different
 * Presents number in ascending order
 * and prints only the smallest combination of the three digit
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
