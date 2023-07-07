#include "main.h"

/**
 * _memset - This function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 * @s: Parameter that points to the address in memory to be filled
 * @b: Parameter that copies the character to be used in the filling
 * @n: Parameter that sets the number of addresses to be filled
 *
 * Return: Returns data of type char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
