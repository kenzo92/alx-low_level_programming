#include "main.h"

/**
 * _memcpy - This function copies memory location from one pointer to another
 * @dest: Parameter that serves as destination for copied memory area
 * @src: Parameter that serves as source for the copied memory area
 * @n: number of bytes to be copied from memory area
 *
 * Return: Returns data of type char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_src, *ptr_dest;

	ptr_src = src;
	ptr_dest = dest;

	while (n > 0)
	{
	*ptr_dest = *ptr_src;
	ptr_src++;
	ptr_dest++;
	n--;
	}

	return (dest);
}
