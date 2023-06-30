#include "main.h"

/**
 * rot13 - This function encodes an input string using rot13
 * @str: Parameter that points to the string to be copied
 *
 * Return: Retuns encoded data of type char
 */

char *rot13(char *str)
{
	/* Declare and assign variables */
	int len, i;
	static char encoded[500];

	/* Get the  length of the input string */
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		/* check if the current character under consideration is lowercase */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			encoded[i] = ((((str[i] - 'a') + 13) % 26) + 'a');
		}

		/* Check if the current character under consideration is UPPERCASE */
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			encoded[i] = ((((str[i] - 'A') + 13) % 26) + 'A');
		}

		/**
		 * Check if current character under consideration is any other
		 * charcter instead - Punctuation marks, numbers, etc
		 */
		else
		{
			encoded[i] = str[i];
		}
	}

	/* Add the null terminating character */
	encoded[i] = '\0';

	return (encoded);
}
