#include "main.h"

/**
 * rev_string - This function reverses string input
 * @s: Parameter that copies string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j, k;
	char temp;

	i = 0;
	while (s[i])
	{
	i++;
	}

	for (k = 0, j = i - 1; k < j; k++, j--)
	{
	temp = s[k];
	s[k] = s[j];
	s[j] = temp;
	}
}
