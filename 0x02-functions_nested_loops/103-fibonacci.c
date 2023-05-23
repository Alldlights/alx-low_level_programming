#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the sum of the even-valued terms
 * followed by a new line.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int num1 = 1, num2 = 1, sum = 0;

	while (num1 < 4000000)
	{
		num1 += num2;
		num2 = num1 - num2;
		if (num1 % 2 == 0)
		{
			sum = sum + num1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
