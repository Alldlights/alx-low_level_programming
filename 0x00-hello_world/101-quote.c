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
	fwrite("and that piece of arts is useful\" - Dora Korpar, 2015-10-19\n", 60, 1, stderr);

	return (1);
}
