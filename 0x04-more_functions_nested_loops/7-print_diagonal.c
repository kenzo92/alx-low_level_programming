#include "main.h"

/**
 * print_diagonal - This function prints diagonals n-times
 * @n: number of diagonals to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
	for (i = 1; i <= n; i++)
	{
	for (j = 1; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
