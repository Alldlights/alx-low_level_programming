#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to program
 * Description: Program that prints min number of coins to make
 * change for a given amount.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: number of coin, 0 on sucess.
 */

int main(int argc, char **argv)
{
	int cent, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	coins = 0;
	if (cent > 25)
	{
		while (cent >= 25)
			cent -= 25, coins++;
	}
	if (cent > 10 && cent < 25)
	{
		while (cent >= 10)
			cent -= 10, coins++;
	}
	if (cent > 5 && cent < 10)
	{
		while (cent >= 5)
			cent -= 5, cent++;
	}
	if (cent > 2 && cent < 5)
	{
		while (cent >= 2)
			cent -= 2, cent++;
	}
	if (cent == 1 || cent == 2 || cent == 5 || cent == 10 || cent == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
