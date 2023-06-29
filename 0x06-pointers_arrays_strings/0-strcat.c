#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: Parameter tha copies the address of the first string
 * @src: Parameter that  copies the second string
 *
 * Description: The function concatenates the two strings
 * firstly eliminating the null terminating character from the first
 * character and then adding it to the resultant concatenated string
 * Return: Returns a pointer to the first string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
	ptr++;
	}

	while (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}

	*ptr = '\0';
	return (dest);
}
