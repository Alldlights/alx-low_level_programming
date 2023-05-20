#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations of three digits
 * three digits must be different and separated by a ','
 * you can only use the putchar() function to dispaly output
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /*Hundred Value*/
		k = (i / 10) % 10; /*tens value*/
		l = i % 10; /*unit value*/

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
