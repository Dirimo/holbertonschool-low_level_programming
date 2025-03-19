#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Description: This function iterates through the array and applies the
 * comparison function 'cmp' to each element. If 'cmp' returns a non-zero
 * value for an element, the function returns the index of that element.
 * If no element matches or if size is non-positive, it returns -1.
 *
 * Return: The index of the first element for which cmp does not return 0.
 *         If no element matches, return -1.
 *         If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
