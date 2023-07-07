#include "main.h"

/**
 * _strncpy - This function copies n characters from the source string into
 * the destination string
 * @dest: Parameter that points to the destination string
 * @src: Parameter that points to the source string
 * @n: Parameter that specifies the number of characters to be copied from
 * destination to source string
 *
 * Return: Returns pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = dest;
	while (*src != '\0' && n > 0)
	{
	*ptr = *src;
	ptr++;
	src++;
	n--;
	}

	while (n > 0)
	{
	*ptr = '\0';
	ptr++;
	n--;
	}

	return (dest);
}
