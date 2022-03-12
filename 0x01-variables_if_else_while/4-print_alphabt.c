#include <stdio.h>
/**
 * main -main block
 * Description: Print alphabets in
 * lowercase and uppercase with
 * the exeption of 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);
		}
		c++;
	}
	putchar ('\n');

	return (0);
}
