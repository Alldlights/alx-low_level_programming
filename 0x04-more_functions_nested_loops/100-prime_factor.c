#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description: program finds and prints the largest prime factor of th number
 * "612852475143" followed by a new line.
 *
 * Return: 0 on success.
 */

int main (void)
{
	long count, largestPrime;
	long bigNum = 612852475143;
	double square = sqrt(bigNum);

	for (count = 1; count <= square; count++)
	{
		if (bigNum % count == 0)
		{
			largestPrime = bigNum / count;
		}
	}
	printf("%ld\n", largestPrime);
	return (0);
}
