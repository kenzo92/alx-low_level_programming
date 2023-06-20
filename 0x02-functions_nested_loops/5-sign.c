#include "main.h"

/**
 * print_sign - This function prints the sign of an integer
 * and as well returns true, zero, or false depending upon printed sign
 * @n: Parameter that copies the value to be tested
 *
 * Return: returns value of type int
 */
int print_sign(int n)
{
if (n > 1)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
