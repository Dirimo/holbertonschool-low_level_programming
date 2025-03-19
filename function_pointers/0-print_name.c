#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Pointer to the name to print.
 * @f: Pointer to a function that knows how to print a name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
