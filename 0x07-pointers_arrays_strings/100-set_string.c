#include "main.h"

/**
 * set_string - fucntion that sets the value of a pointer to a char
 * @s: pointer to a ointer to a string
 * @to: pointer to a varibale to copy to s
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
