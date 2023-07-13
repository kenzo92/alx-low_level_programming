#include "main.h"
#include <stdlib.h>

/**
 * _strlen - This function compures the length of a string
 * @s: String for which length is required
 *
 * Return: Returns data of type int
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * string_nconcat - This function concatenates two strings s1, and s2
 * @s1: First or base string
 * @s2: Second string
 * @n: Number of characters from s2 to be appended to s1
 *
 * Return: Returns data of type char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len_s1, len_s2;

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
	if (n >= len_s2)
	{
		n = len_s2;
	}

	s = malloc((len_s1 + n + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len_s1)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < (len_s1 + 1))
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';
	return (s);
}
