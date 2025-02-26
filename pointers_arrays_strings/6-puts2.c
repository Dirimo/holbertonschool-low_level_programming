#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as input and
 * prints every other character of the string, starting with the first
 * character. The output is followed by a new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
