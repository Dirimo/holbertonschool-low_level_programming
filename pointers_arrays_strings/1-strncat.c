#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Find the end of the destination string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy the source string to the end of the destination string */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the null terminator to the end of the concatenated string */
	dest[i] = '\0';

	return (dest);
}
