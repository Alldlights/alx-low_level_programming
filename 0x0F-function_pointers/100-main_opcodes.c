#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @agrc: Argument count
 * @argv: Argument vector
 *
 * description: Program prints the opcode of its own main function
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int (*ptr)(int, char **);
	char *main_bytes;
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = main;
	main_bytes = (char *)ptr;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", (unsigned char)main_bytes[i]);
	}
	printf("\n");
	return (0);
}
