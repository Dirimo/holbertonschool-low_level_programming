#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: A pointer to the string whose length is to be determined.
 *
 * Description: This function calculates the length of the string pointed to by
 *              's' using recursion. It checks if the current character is the
 *              null terminator '\0'. If it is, it means the end of the string
 *              has been reached, and the function returns 0 (the length of an
 *              empty string). Otherwise, it recursively calls itself with the
 *              next character in the string (s + 1) and adds 1 to the result.
 *              This process continues until the end of the string is reached,
 *              effectively counting each character in the string.
 *
 * Return: The length of the string 's'.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
