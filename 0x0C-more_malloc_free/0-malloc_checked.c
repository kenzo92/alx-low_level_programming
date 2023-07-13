#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory
 * @b: Parameter that copies the number of memory spaces to be allocated
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
