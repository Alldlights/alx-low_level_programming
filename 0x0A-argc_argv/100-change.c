#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int coin, cent25, cent10, cent5, cent2, cent1, total_coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	if (coin < 0)
		printf("0\n");

	cent25 = coin / 25;
	coin %= 25;

	cent10 = coin / 10;
	coin %= 10;

	cent5 = coin / 5;
	coin %= 5;

	cent2 = coin / 2;
	coin %= 2;

	cent1 = coin;
	total_coin = cent25 + cent10 + cent5 + cent2 + cent1;
	printf("%d\n", total_coin);
	return (0);
}
