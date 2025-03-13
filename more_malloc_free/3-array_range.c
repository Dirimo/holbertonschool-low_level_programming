#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: The pointer to the newly created array.
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* If min > max, return NULL */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(sizeof(int) * size);

	/* If malloc fails, return NULL */
	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
