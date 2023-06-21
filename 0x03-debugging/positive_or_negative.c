#include "main.h"

/**
 * positive_or_negative - This function returns an integer value
 * @i: Parameter used to copy the value of the integer to be returned
 *
 * Return: returns void
 */
void positive_or_negative(int i)
{
	if (i > 0)
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
