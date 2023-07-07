#include "main.h"

/**
 * _strcmp - This function compares strings
 * @s1: Parameter that points to the first string
 * @s2: Parameter that points to the second string
 *
 * Description: The function compares the ASCII values of
 * corresponding characters in the two strings and returns a positive
 * negative, or zero value depending upon whether the ASCII value of
 * the character in string s1 is greater than, less than, or equal to the
 *  ACSII value of the corresponding character in string s2.
 *  Return: Returns data of type int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
	s1++;
	s2++;
	}

	return (*s1 - *s2);
}
