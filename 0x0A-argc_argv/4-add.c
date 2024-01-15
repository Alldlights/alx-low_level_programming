#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to add positive numbers on the command line
 * @argc: argument count to the program
 * @argv: argument vector to the program
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
