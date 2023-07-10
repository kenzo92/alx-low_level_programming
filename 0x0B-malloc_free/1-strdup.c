#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: Parameter that points to the source string
 *
 * Return: Returns data of type char
 */

char *_strdup(char *str)
{
	unsigned int str_len, i;
	char *ptr_str;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}

	str_len += 1;

	ptr_str = malloc(str_len * sizeof(char));
	if (ptr_str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < str_len - 1)
	{
		ptr_str[i] = str[i];
		i++;
	}
	ptr_str[str_len - 1] = '\0';

	return (ptr_str);
}

