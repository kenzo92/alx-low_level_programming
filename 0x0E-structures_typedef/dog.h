#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This contains the properties of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: This structure returns the details that pertains to a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
