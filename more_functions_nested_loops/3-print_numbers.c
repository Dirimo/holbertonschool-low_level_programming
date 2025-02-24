#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line
 *
 * Description: This function prints the digits from 0 to 9 using _putchar,
 * then adds a new line. It uses _putchar only twice in the code.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
