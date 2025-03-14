#ifndef DOG_H
#define DOG_H

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
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
