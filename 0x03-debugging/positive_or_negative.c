#include "main.h"

/**
 * positive_or_negative - This function compares integer values
 * prints an integer value
 * @i: Parameter that copies the integer value to be printed
 *
 * Return: returns void
 */
void positive_or_negative(int i)
{
	if (i > 1)
	{
	printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}
}
