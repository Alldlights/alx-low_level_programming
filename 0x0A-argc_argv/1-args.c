#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: on sucess 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	if (argc)
	{
		argc -= 1;
		printf("%d\n", argc);
	}
	return (0);
}
