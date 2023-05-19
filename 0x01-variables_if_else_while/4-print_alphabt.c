#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase except 'q' and 'e'
 *
 * Return: Always 0 on Sucess
 */
int main(void)
{
	int start = 'a';
	int end = 'z';

	while (start <= end)
	{
		if (start != 'e' && start != 'q')
			putchar(start);
		start++;
		
	}
	putchar('\n');

	return (0);
}
