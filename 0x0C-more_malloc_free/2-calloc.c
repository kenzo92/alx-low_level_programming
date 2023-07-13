#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This function creates an array of nmemb elements of size bytes
 * @nmemb: Number of elements in the array to be created
 * @size: Parameter that copiesthe individual size of bytes to be created
 *
 * Return: Returns Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *a;
	unsigned char *byte_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}

	byte_ptr = a;

	i = 0;
	while (i < nmemb * size)
	{
		byte_ptr[i] = 0;
		i++;
	}

	return (a);
}
