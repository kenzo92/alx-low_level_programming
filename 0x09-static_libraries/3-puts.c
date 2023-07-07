#include "main.h"

/**
 * _puts - This function prints a string to stdout
 * @str: Parameter that copies string to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

		i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
