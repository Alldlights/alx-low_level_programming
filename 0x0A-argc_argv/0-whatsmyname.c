#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints its name followed by anew line
 * @argc: argument count decalred as void
 * @argv: pointer to an array of argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
