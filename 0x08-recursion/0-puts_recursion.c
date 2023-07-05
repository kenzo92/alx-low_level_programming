#include "main.h"

/**
 * _puts_recursion - This function prints a string using recursion
 * @s: Parameter that copies the string to be printed
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);
}
