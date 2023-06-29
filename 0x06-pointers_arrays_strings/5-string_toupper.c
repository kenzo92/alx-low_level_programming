#include "main.h"

/**
 * string_toupper - This string converts all lowercase letters to
 * uppercase
 * @str: Parameter that copies the string to be converted
 *
 * Return: Returns data of type char
 */

char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - ('a' - 'A');
	}
	ptr++;
	}
	return (str);
}
