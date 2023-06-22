#include "main.h"
/**
 * _isupper - This function checks for uppercase character of
 * the English alphabet
 * @c: Parameter that copies the argument to be checked
 *
 * Return: either i or zero
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
else if (c >= 'a' && c <= 'z')
	{
	return (0);
	}
return (0);
}
