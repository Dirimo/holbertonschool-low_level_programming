#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to a newly allocated space in memory, which contains
 * s1, followed by the first n bytes of s2, and null terminated.
 * If the function fails, it should return NULL.
 * If n is greater or equal to the length of s2 then use the entire
 * string s2.
 * If NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *result;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Adjust n if it's greater than or equal to the length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	result = malloc(sizeof(char) * (len1 + n + 1));

	/* Check if malloc fails */
	if (result == NULL)
		return (NULL);

	/* Copy s1 into the result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy the first n bytes of s2 into the result */
	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];

	/* Null terminate the result */
	result[i] = '\0';

	return (result);
}
