#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 *
 * Description: This function determines whether the input character
 * is an uppercase letter (A-Z).
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
