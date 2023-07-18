#include "dog.h"
#include <stdlib.h>

/**
 * str_free - This function frees allocated memory space
 * @str: Pointer to the memory space to be frred
 *
 * Return: Returns data of type char
 */

void str_free(char *str)
{
	free(str);
}

/**
 * free_dog - This function frees dogs
 * @d: Pointer to dog_t(struct dog)
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		str_free(d->name);
		str_free(d->owner);
		free(d);
	}
}
