#include "function_pointer.h"

/**
 * print_name - a function that prints a name
 * @name: char string
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
