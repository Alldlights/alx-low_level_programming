#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 *   followed by a new line, to the standard error
 * Return: 1 on Success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);

	return (1);
}
