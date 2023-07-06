#include "main.h"

/**
 * is_palindrome_helper - This is a helper function
 * @s: Parameter that points to the string
 * @start: Parametr that denotes the string index from the RHS
 * @end: Parameter that denotes the string index from the LHS
 *
 * Return: Returns data of type int
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * _strlen - This function returns the length of the string passed
 * @s: Parameter that points to the string whoes length is required
 *
 * Return: Returns data of type int
 */

int _strlen(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}

	len = 1 + _strlen(s + 1);

	return (len);
}

/**
 * is_palindrome - This function checks if a string is a palindrome
 * @s: Parameter that points to the string to be checked
 *
 * Return: Returns data of type in
 */

int is_palindrome(char *s)
{
	int string_length;

	string_length = _strlen(s);

	return (is_palindrome_helper(s, 0, string_length - 1));
}
