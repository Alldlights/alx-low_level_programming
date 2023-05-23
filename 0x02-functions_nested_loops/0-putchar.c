#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the string "_putchar"
 * Using the _putchar() function followed by new line.
 *
 * Return: 0 on sucess.
 */
int main(void)
{
	char ch[8] = "_putchar";
	int i = 0;
	int arrLen = sizeof(ch) / sizeof(ch[0]);

	while (i < arrLen)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
