#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.  The destination buffer
 *        where the src string will be appended.  It must be large
 *        enough to hold the result.
 * @src: Pointer to the source string.  The string to be appended to
 *       the dest string.
 * @n: The maximum number of bytes to be appended from src.
 *     If src is shorter than n bytes, the entire src string is appended.
 *
 * Return: A pointer to the resulting string dest.
 *         This pointer is the same as the original dest pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
