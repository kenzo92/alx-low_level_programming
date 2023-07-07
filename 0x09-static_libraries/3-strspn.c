#include "main.h"

/**
 * _strspn - This function returns the number of bytes in the
 * initial segment of s which consist only of bytes from accept
 * @s: Parameter that copies the pointerto the string whose
 * substring prefix is required
 * @accept: Parameter that copies th pointer to the prefix substring
 *
 * Return: Returns data of type unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	char *ptr_s, *ptr_accept;
	unsigned int length;

	ptr_s = s;
	length = 0;

	while (*ptr_s != '\0')
	{
		ptr_accept = accept;

		while (*ptr_accept != '\0' && *ptr_s != *ptr_accept)
		{

			ptr_accept++;

		}

		if (*ptr_accept == '\0')
		{
			break;
		}
		length++;
		ptr_s++;
	}
	return (length);
}
