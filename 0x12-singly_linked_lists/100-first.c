#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: Always 0
*/

void bmain(void) __attribute__ ((constructor));

void bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
