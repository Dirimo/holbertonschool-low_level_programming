#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes the members
 * of a struct dog variable with the provided name,
 * age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

