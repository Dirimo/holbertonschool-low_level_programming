#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 * The memory is set to zero.
 * If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	/* If nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory using malloc */
	ptr = malloc(nmemb * size);

	/* If malloc fails, return NULL */
	if (ptr == NULL)
		return (NULL);

	/* Set the memory to zero */
	char_ptr = (char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
		char_ptr[i] = 0;

	return (ptr);
}
