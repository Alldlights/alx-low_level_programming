#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: pointer to the param
 * @n: pointer to int param
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
