#include <stdio.h>

/**
 * main - Entry point
 * Description: program prints numbers from 1 tp 100. if multiples of 3, print
 * the string "Fizz", else if multiple of 5 print the string "Buzz" otherwise
 * print "FizzBuzz" if multiple of 3 and 5.
 *
 * Return: 0 on success
 */

int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}

		if (a != 100)
		{
			printf(" ");
		}
		a++;
	}
	printf("\n");
	return (0);
}
