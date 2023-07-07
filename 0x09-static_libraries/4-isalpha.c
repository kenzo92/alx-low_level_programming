#include "main.h"

/**
 * _isalpha - This function returns tru for alphabet character
 *  or false for otherwise
 * @c: Parameter that copies the value of the character passed
 *
 * Return: returns value of type int
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	return (1);
else
	return (0);
}
