#include "main.h"

/**
 * _strlen - This function prints string, negelecting the null terminator
 * @s: Parameter which copies the string to be printed
 *
 * Return: Returns data of type int
 */

int _strlen(char *s)
{
	int i;
	
	i = 0;

	while (s[i])
	{
	i++;
	}

	return (i);
}
