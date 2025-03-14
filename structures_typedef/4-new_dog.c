#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog_t, or NULL if it fails.
 *
 * Description: This function creates a new dog by allocating
 * memory for a dog_t structure and copying the provided
 * name and owner strings.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_copy = strdup(name);
		if (name_copy == NULL)
		{
			free(new_dog_ptr);
			return (NULL);
		}
	}
	else
		name_copy = NULL;

	if (owner != NULL)
	{
		owner_copy = strdup(owner);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(new_dog_ptr);
			return (NULL);
		}
	}
	else
		owner_copy = NULL;

	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
