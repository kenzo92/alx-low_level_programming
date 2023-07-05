#include "main.h"

/**
 * is_prime_number_helper - This function returns the prime number to the
 * is_prime_number function
 * @n: Parameter that copies the value of the number to be checked
 * @divisor: Checking Parameter
 *
 * Return: Returns value of type int
 */

int is_prime_number_helper(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_number_helper(n, divisor - 1));
}


/**
 * is_prime_number - This function returns 1 for prime numbers and
 * 0 otherwise
 * @n: Parameter that copies the number to be checked
 *
 * Return: Retruns data of type int
 */

int is_prime_number(int n)
{
	int divisor;

	divisor = n - 1;

	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_number_helper(n, divisor));
}
