#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')

	{
		putchar(letter);
		letter--;
	}
	putchar ('\n');

	return (0);
}
