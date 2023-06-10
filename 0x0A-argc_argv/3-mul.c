#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to program
 * Description: a program that prints them multiplication of two args number
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on sucess else 1 on error
 */

int main(int argc, char *argv[])
{
	int num_1 = 0; num_2 = 0;

	if (argc == 3)
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		printf("%d\n", num_1 * num_2);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
