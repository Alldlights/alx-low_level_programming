#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
