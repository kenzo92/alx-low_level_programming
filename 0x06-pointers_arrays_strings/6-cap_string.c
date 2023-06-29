#include "main.h"

/**
 * is_white_space - This function checkes if the current character is a space
 * character
 * @c: Parameter that copies the character to be checked
 *
 * Return: Returns data of type int
 */

char is_white_space(char c)
{
	return ((c == '\n') || (c == '\t') || (c == ' '));
}

/**
 * is_separator - This function checks if the current character is a
 * punctuation mark
 * @c: Parameter that copies the character to be checked
 *
 * Return: Returns data of type char
 */

char is_separator(char c)
{
	return (c == ',' || c == ';' || c == '.' || c == '!' || c == '?');
}

/**
 * is_separator2 - This function checks if the current character is a
 * punctuation mark
 * @c: Parameter that copies the character to checked
 *
 * Return: Returns data of type char
 */

char is_separator2(char c)
{
	return (c == '{' || c == '}' || c == ')' || c == '(' || c == '"');
}

/**
 * cap_string - This function capitalizes the alphabet at the beginning
 * of a word in a string
 * @str: Parameter that copies the string to be transformed
 *
 * Return: Returns data of type char
 */

char *cap_string(char *str)
{
	int capitalize_next;
	char *ptr;

	ptr = str;
	capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (is_white_space(*ptr) || is_separator(*ptr) || is_separator2(*ptr))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr = *ptr - ('a' - 'A');
			}
			capitalize_next = 0;
		}
		ptr++;
	}
	return (str);
}
