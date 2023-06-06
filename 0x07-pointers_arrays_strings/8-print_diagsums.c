#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * sqaure matrix of integers.
 * @a: pointer to array of numbers
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int b = 0;
	int c = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (b <= (size * size))
	{
		sum1 += a[b];
		b += size + 1;
	}
	while (c < (size * size - 1))
	{
		sum2 += a[c];
		c += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}

