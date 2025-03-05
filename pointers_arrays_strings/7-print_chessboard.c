#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: A pointer to a 2D array representing the chessboard.
 *      The array is of type char[8][8].
 *
 * Description: This function prints the chessboard represented by the
 *              2D array 'a' to the standard output. Each element of the
 *              array represents a square on the chessboard, and the
 *              character value of the element is printed.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
