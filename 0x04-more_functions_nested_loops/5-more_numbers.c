#include "main.h"

/**
 * more_numbers - This function prints ten lines of single digits
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
	for (i = '0'; i <= '9'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}
	_putchar('\n');
}
