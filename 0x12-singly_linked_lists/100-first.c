#include <stdio.h>

/**
 * out_put - a funtion that prints from init by th loader before main
 *
 * Return: Nothing
 */
void out_put(void)__attribute__((constructor));

void out_put(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
