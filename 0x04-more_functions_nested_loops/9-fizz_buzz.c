#include <stdio.h>

/**
 * main- Entry point. This function prints numbers from 1 to 100
 *
 * Description: The function prints Fizz and Buzz for numbers that are
 * multiples of 3 and 5, FizzBuzz for numbers that are both multiples of
 * 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", i);
	}
	}
	printf("\n");

	return (0);
}
