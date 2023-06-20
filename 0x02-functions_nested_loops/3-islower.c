#include "main.h"

/**
 * _islower - This function returns true for lowercase alphabet
 * and false for any other character
 * @c: Parameter used to copy value to be checked
 *
 * Return: returns value of type int.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
