#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion.
 * @s: A pointer to the string to be printed.
 *
 * Description: This function prints the characters of the string pointed to by
 *              's' to the standard output, one character at a time, using
 *              recursion. After printing all characters in the string, it
 *              prints a new line character ('\n') to ensure the output is
 *              properly terminated. If 's' is NULL or points to an empty
 *              string, only the new line character is printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
