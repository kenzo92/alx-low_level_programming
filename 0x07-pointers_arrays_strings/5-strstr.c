#include "main.h"
#include <stddef.h>

/**
 * _strstr - This function locates a substring
 * @haystack: Parameter that copies the first string
 * @needle: Parameter that copies the second string
 *
 * Return: Returns a pointer of type char
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr_h, *ptr_n;

	while (*haystack != '\0')
	{
		ptr_h = haystack;
		ptr_n = needle;

		while (*ptr_h == *ptr_n && *ptr_h != '\0' && *ptr_n != '\0')
		{
			ptr_h++;
			ptr_n++;
		}
		if (*ptr_n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
