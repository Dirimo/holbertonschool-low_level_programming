#include "main.h"

/**
 * print_triangle - Prints a triangle using the character #
 * @size: The size of the triangle
 *
 * Description: This function prints a right-aligned triangle of given size
 * using '#'. If size is 0 or less, it only prints a newline.
 * The function uses _putchar to print characters.
 */
void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space > 0; space--)
				_putchar(' ');

			for (col = 1; col <= row; col++)
				_putchar('#');

			_putchar('\n');
		}
	}
}

