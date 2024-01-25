#include "function_pointer.h"

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

	f_ptr(name);
}
