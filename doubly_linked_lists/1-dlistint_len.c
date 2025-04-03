#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: A pointer to the head of the dlistint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	for (current = h; current != NULL; current = current->next)
	{
		count++;
	}

	return (count);
}
