#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - This function returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Returns data of type len
 */

int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - This function copies a string into an an allocated memory space
 * @src: Pointer to source string
 *
 * Return: Pointer to destination memory space
 */

char *_strcpy(char *src)
{
	char *dest;
	int i, len_src;

	len_src = _strlen(src);
	dest = (char *)malloc((len_src + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);

	i = 0;
	while (i <= len_src)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

/**
 * new_dog - This function creates a new dog of type struct
 * @name: Pointer to the dog name
 * @age: Dog age
 * @owner: Pointer to dog owner
 *
 * Return: data of type struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->name = _strcpy(name);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->owner = _strcpy(owner);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
