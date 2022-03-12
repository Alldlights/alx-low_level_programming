#include <stdio.h>
/**
 * main - main block
 * Description: Prints all the aplhabets in reverse
 * Return: 0
 */
int main(void)
{
	char b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}

	putchar('\n');
	return (0);
}
