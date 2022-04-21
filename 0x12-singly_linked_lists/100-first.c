#include <stdio.h>

/**
 * before_main - prints a statment before the main function
 * Return: nothing.
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - prints a statment and checks the code
 *
 * Return: 0;
 */

int main(void)
{
	printf("(A tortise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
