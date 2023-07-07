#include "main.h"
#include <stddef.h>

/**
 * _strchr - This function returns a pointer to the first occurrence
 * of the character
 * @s: Parameter that copies the string to be checked
 * @c: Character to be checked
 *
 * Return: Returns a pointer of type char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
