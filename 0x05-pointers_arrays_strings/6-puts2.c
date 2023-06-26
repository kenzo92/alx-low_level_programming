#include "main.h"

/**
 * puts2 - This function prints every other character
 * @str: Parametter that copies the string containing the characters
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i, j;

	j = 0;
	while (str[j])
	{
	j++;
	}

	i = 0;
	while (i >= 0 && i <= j - 1)
	{
	_putchar(str[i]);
	i += 2;
	}
	_putchar('\n');
}
