#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 *
 * Description: This function determines whether the input character
 * is a digit between 0 and 9 inclusive.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
