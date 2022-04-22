#include <stdio.h>
/**
 * before_main - Print statement within the finction
 * before main function is executed.
 */
void before_main(void)  __attribute__((constructor));

void before_main(void)
{
	printf("You're best and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - checks code 
 *
 * Returns: 0;
 */
int main (void)
{
	printf("(A tortise, having pretty good sense of a hare's nature, challenges one to a race.)\n");

	return (0);
}
