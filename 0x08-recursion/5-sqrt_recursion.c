#include "main.h"

/**
 * _sqrt_recursion_helper - This function returns the guessed square root
 * @n: Parameter that copies the number whose square root is required
 * @guess: Parameter that copies the lower range
 *
 * Return: Returns data of type int
 */

int _sqrt_recursion_helper(int n, int guess)
{
	int root;

	root = ((guess + n / guess) / 2);

	if (root == guess)
	{
		return (root);
	}

	return (_sqrt_recursion_helper(n, root));
}
/**
 * _sqrt_recursion - This function returns the square root of natural numbers
 * @n: Parameter that copies the value of integer whose square root is required
 *
 * Return: Returns value of data type int
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	else
	{
		return (_sqrt_recursion_helper(n, n));
	}
}
