#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - This function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: Parameter that copies the first string
 * @accept: Parameter that copies the second string
 *
 * Return: Returns a pointer to a char
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr_accept;

	while (*s != '\0')
	{
		ptr_accept = accept;
			while (*ptr_accept != '\0')
			{
				if (*s == *ptr_accept)
				{
					return (s);
				}
				ptr_accept++;
			}
			s++;
		}
	return (NULL);
}
