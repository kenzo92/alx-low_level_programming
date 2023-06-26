#include "main.h"

/**
 * print_rev - This function prints strings in reverse order
 * @s: Parameter that copies string to be printed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int j, i;

	i = 0;

	while (s[i])
	{
	i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
	_putchar(s[j]);
	}
	_putchar('\n');
}
