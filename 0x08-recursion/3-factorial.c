#include "main.h"

/**
 * factorial - This function prints the factorial of a number
 * @n: Parameter that copies the value of the number whoes factorial is
 * required
 *
 * Return: Returns data of type int
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
	return (1);
	}

	if (n < 1)
	{
	return (-1);
	}

	return (n * factorial(n - 1));
}
