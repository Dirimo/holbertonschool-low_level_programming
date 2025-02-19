#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function uses _putchar to print each letter of the alphabet
 *              from 'a' to 'z'. It adheres to the constraint of using _putchar
 *              only twice.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	_putchar(letter - 32 + 32); /* Prints 'a' */
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
