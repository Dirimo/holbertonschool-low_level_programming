#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *                  of integers.
 * @a: A pointer to the square matrix represented as a 1D array.
 * @size: The size of the square matrix (number of rows/columns).
 *
 * Description: This function calculates and prints the sum of the elements
 *              on the main diagonal (top-left to bottom-right) and the
 *              secondary diagonal (top-right to bottom-left) of a square
 *              matrix. The matrix is passed as a 1D array, and the size
 *              parameter indicates the dimensions of the square matrix.
 *              The sums are printed to the standard output in the specified
 *              format.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
