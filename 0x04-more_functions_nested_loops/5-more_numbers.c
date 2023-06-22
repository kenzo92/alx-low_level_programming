#include "main.h"

/**
 * more_numbers - This function prints ten lines of single digits
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k;
	char c;

	for (j = 1; j <= 10; j++)
	{
	for (i = 0; i <= 14 ; i++)
	{
	if (i < 10)
	{
	c = i + '0';
	}
	else
	{
	k = i / 10;
	c = k + '0';
	_putchar(c);
	k = i % 10;
	c = k + '0';
	}
	_putchar(c);
	}
	_putchar('\n');
	}
}
