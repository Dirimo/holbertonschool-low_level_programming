#include "dog.h"
#include <stdlib.h>
/**
 * struct dog - Structure representing a dog.
 *
 * @name: The name of the dog (char *).
 * @age: The age of the dog (float).
 * @owner: The owner's name (char *).
 *
 * Description: This structure defines the basic
 * attributes of a dog, including its name, age,
 * and the name of its owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
