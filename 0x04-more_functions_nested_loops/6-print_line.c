#include "main.h"

/**
 * print_line - This function prints a line
 * @n: Parameter that indicates the length of line to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (!(n <= 0))
	{
	for (i = 1; i <= n; i++)
	{
	_putchar('-');
	}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
