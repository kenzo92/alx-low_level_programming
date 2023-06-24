#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function returns the sum of all the
 * multiples of three or five below 1024
 * two local variables i, and sum are declared
 * Return: Always 0
 */

int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
	if (i % 3 == 0  || i % 5 == 0)
	{
	sum += i;
	}
	}
	printf("%d\n", sum);
	return (0);
}
