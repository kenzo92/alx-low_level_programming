#include "main.h"

/**
 * print_triangle - This function prints a triangle
 * @size: The size of the triangle to be printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (!(size <= 0))
	{
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size - i; j++)
	{
	_putchar(' ');
	}
	for (k = 1; k <= i; k++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
