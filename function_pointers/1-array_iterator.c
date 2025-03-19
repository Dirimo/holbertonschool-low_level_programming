#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to execute on each element.
 *
 * Description: This function iterates through the given array,
 * and for each element, it calls the provided function 'action'
 * with the element as its argument.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}
}
