#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: A pointer to the string to be printed in reverse.
 *
 * Description: This function prints the characters of the string pointed to by
 *              's' to the standard output in reverse order, using recursion.
 *              It first recursively calls itself with the next character in the
 *              string until it reaches the end of the string (the null
 *              terminator '\0'). Then, as the calls return, it prints each
 *              character, effectively reversing the string. If 's' is NULL or
 *              points to an empty string, nothing is printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
