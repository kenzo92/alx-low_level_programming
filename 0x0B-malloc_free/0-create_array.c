#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of characters
 * @size: Parameter that copies the size of the array
 * @c: Parameter that copies the constant character
 *
 * Return: Returns data of type char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc((size + 1) * sizeof(char));

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	str[i] = '\0';

	return (str);

}
