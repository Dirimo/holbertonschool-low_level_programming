#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1 = 0, len2 = 0, i, j;

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

	/* Allocate memory for the concatenated string */
	concat_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if malloc failed */
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 into concat_str */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* Copy s2 into concat_str, starting after s1 */
	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concat_str[i + j] = '\0';

	return (concat_str);
}
