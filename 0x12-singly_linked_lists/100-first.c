#include <stdio.h>
/**
 * before_main - Print statement within the finction
 * before main function is executed.
 */
void before_main(void)  __attribute__((constructor))

before_main(void)
{
	printf("You're best and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
