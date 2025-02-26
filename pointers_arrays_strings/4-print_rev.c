#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function takes a pointer to a string as input and
 * prints the string in reverse order, followed by a new line character.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Calculate the length of the string */
	while (s[len] != '\0')
		len++;

	/* Print the string in reverse */
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	/* Print a new line character */
	_putchar('\n');
}
