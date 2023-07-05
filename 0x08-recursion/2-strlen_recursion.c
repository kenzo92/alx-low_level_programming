#include "main.h"

/**
 * _strlen_recursion - This function returns the length of a function
 * @s: Parameter that points to the string whose length is required
 *
 * Return: Retruns data of type int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
