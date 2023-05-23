#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 follwed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	int sta_rt, sum;

	sum = 0;

	for (sta_rt = 0; sta_rt < 1024; sta_rt++)
	{
		if ((sta_rt % 3 == 0) || (sta_rt % 5 == 0))
		{
			sum = sum + sta_rt;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum);

	return (0);
}
