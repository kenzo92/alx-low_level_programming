#include "main.h"

/**
 * _pow_recursion - This function returns the value of an integer
 * raised to the power of another integer
 * @x: Paramter that copies the value of the base integer
 * @y: Parameter that copies the value of the index integer
 *
 * Return: Returns data of type int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
