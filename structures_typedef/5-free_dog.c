#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: Pointer to the dog_t to free.
 *
 * Description: This function frees the memory allocated
 * for a dog_t structure, including the name and owner
 * strings if they were dynamically allocated.
 * If d is NULL, nothing happens.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
