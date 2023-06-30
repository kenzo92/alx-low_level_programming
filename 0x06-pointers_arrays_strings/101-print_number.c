#include "main.h"

/**
 * print_number - This function prints integers
 * @n: Parameter that copies the integer to be printed
 *
 * Description: The function prints integers(up to four digits)
 * Return: Nothing
 */

void print_number(int n)
{
	int tens_digit, unit_digit;

	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}

	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 0)
	{
		n *= -1;
		tens_digit = n / 10;
		unit_digit = n % 10;
		_putchar('-');
		_putchar(tens_digit + '0');
		_putchar(unit_digit + '0');
	}
}
