#include "main.h"

/**
 * puts_half - This function prints half of a string
 * @str: Parameter that copies the string to be printed
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, n, length_of_the_string;

	length_of_the_string = 0;
	while (str[length_of_the_string] != '\0')
	{
	length_of_the_string++;
	}

	if (length_of_the_string % 2 == 0)
	{
	n = length_of_the_string / 2;
	for (i = n; i <= length_of_the_string; i++)
	{
	_putchar(str[i]);
	}
	}

	else if (length_of_the_string % 2 == 1)
	{
	n = (length_of_the_string - 1) / 2;
	for (i = n; i <= length_of_the_string - 1; i++)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
