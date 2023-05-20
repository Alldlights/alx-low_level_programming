#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all possible combination of two digits
 * Numbers must be separated by ',' and a space
 * Only use the putchar() function 5 times and not th data type char
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i % 10; /*get single digit*/
		k = i / 10; /*get double digit*/

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
