#include "main.h"

/**
 * wildcmp - This function compares two strings
 * @s1: Parameter that points to the first string
 * @s2: Parameter that points to the second string
 *
 * Return: Returns data of type int
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if ((wildcmp(s1, s2 + 1)) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
		{
			return (1);
		}
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
