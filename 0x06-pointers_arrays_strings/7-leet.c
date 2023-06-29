#include "main.h"

/**
 * leet - This function encodes
 * @str: Parameter that copies the string to be encoded
 *
 * Return: Returns data of type char
 */

char *leet(char *str)
{
	char *ptr;
	int i, j;
	char replacement[5];
	char letter[5];

	letter[0] = 'a';
	letter[1] = 'e';
	letter[2] = 'o';
	letter[3] = 't';
	letter[4] = 'l';
	replacement[0] = '4';
	replacement[1] = '3';
	replacement[2] = '0';
	replacement[3] = '7';
	replacement[4] = '1';
	ptr = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letter[j] || str[i] == letter[j] - ('a' - 'A'))
			{
				str[i] = replacement[j];
				break;
			}
		}
	}
	return (ptr);
}
