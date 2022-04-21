#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: Always 0
 */
void bmain(void) __attribute__ ((constructor)) int main(void);

void bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - prints a string in a new line
 * Return: 0
 */
int main(void)
{
	printf("(A tortise, having pretty good sense of a hare's nature
		, challenges one to a race.)\n");
	return (0);
}
