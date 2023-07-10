#include "main.h"
#include <stdlib.h>

/**
 * _strlen - This function returns the length of a string
 * @s: Parameter that points to the string
 *
 * Return: Returns data of type int
 */

int _strlen(char *s)
{
	unsigned int string_length;

	string_length = 0;

	while (*s != '\0')
	{
		s++;
		string_length++;
	}

	return (string_length);
}

/**
 * str_concat - This function concatenates two strings
 * @s1: Parameter that points to the first string to be copied
 * @s2: Parameter that points to the second string to be copied
 *
 * Return: Returns data of type char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len_s1, len_s2, len;
	char *ptr_s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	len = len_s1 + len_s2;
	len += 1;

	ptr_s = malloc(len * sizeof(char));
	if (ptr_s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len_s1)
	{
		ptr_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len_s2)
	{
		ptr_s[j + i] = s2[j];
		j++;
	}
	ptr_s[j + i] = '\0';

	return (ptr_s);
}
