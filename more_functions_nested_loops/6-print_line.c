#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 *
 * Description: This function prints a straight line using '_' character.
 * The length of the line is determined by the input parameter 'n'.
 * If n is 0 or less, only a newline character is printed.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

