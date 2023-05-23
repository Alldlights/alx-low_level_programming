#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the forst 50 Fibonacci numbers, starting from
 * 1 and 2 in a new line with comma followed by a space.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 2;
	long int num1 = 1, num2 = 2;
	long int k;

	printf("%lu, ", num1);
	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%lu\n", num2);
		}
		else
		{
			printf("%lu, ", num2);
		}
		k = num2;
		num2 += num1;
		num1 = k;
		i++;
	}
	return (0);
}
