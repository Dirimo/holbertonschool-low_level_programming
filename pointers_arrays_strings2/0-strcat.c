#include "main.h"

/**
 * strcat - concatenates two strings pointed to by @src,
 * overwriting null btye and the end of dest
 * then addds a terminating null byte
 *
 * Return pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0 , dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index =0; src[index]; index++)
		dest[dest_len++] = src [index];

	return (dest);
