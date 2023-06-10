#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to program
 * Description: a program that prints the number of arguments passed on it
 * @argc: argument count
 * @argv: pointer to argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void) **argc;
	printf("%d\n", argc - 1);

	return (0);
}
