#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: The number of elements of the array to be printed.
 *
 * Description: This function takes a pointer to an array of integers
 * and the number of elements to be printed as input. It prints the
 * specified number of elements, separated by a comma and a space,
 * followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i=0; i < n; i++)
	{
		printf(%d , a[i];
				if (i < n - 1)
				printf(", ");
				}
				printf("\n");
				}
