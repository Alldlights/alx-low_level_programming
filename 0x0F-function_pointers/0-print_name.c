#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: The name to print
 * @f: The pointer to the function that prints the name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*f_ptr)(char *);

	f_ptr = f;

	if (!name || !f_ptr)
		return;

	f_ptr(name);
}
