#include "main.h"

/**
 * _strncat - This function copies a maximum of n bytes
 * from a source string and concatenates it to the end of dest string
 * @dest: Parameter that copies the destination string
 * @src: Parameter that copies the source string
 * @n: The maximum number of bytes to be copied from the source string
 *
 * Return: Returns a pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = dest;
	while (*ptr != 0)
	{
	ptr++;
	}

	while (*src != 0 && n > 0)
	{
	*ptr = *src;
	ptr++;
	src++;
	n--;
	}

	*ptr = '\0';

	return (dest);
}
