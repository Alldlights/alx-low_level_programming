#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point to program
 * Description: program that adds positive numbers, prints result followed
 * by a new line.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on sucess, 1 on error.
 */

int main(int argc, char **argv)
{
	int count;
	unsigned int loop, sum = 0;
	char *str;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			str = argv[count];
			for (loop = 0; loop < strlen(str); loop++)
			{
				if (str[loop] < 48 || str[loop] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(str);
			str++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
