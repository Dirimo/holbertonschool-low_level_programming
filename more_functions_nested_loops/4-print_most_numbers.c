#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4
 *
 * Description: This function prints single digit numbers from 0 to 9,
 * but does not print 2 and 4. It uses _putchar to print characters.
 */
void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
			_putchar(number);
	}
	_putchar('\n');
}
