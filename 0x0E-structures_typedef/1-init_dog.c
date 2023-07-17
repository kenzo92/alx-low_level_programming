#include "dog.h"

/**
 * init_dog - This function initializes the elements in the struct dog
 * @d: Pointer to the struct type dog
 * @name: Pointer to the dog name
 * @age: Parameter that copies the dog age
 * @owner: Pointer to the dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
