#include <stdio.h>

/**
 * before_main - Function that prints before the main function
 *
 * Return: Nothing
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
