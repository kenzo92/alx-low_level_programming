#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0;
 */

long long largestPrimeFactor(long long number);

int main(void)
{
	long long number;
	long long largestPrime;

	number = 612852475143;
	largestPrime = largestPrimeFactor(number);
	printf("%lld\n", largestPrime);
	return (0);
}

/**
 * largestPrimeFactor - This function prints the largest prime factor
 * of a very large integer
 * @number: Parameter that copies the very large integer
 *
 * Return: long long int
 */

long long largestPrimeFactor(long long number)
{
	long long factor, largestFactor;

	while (number % 2 == 0)
	{
	largestFactor = 2;
	number /= 2;
	}
	factor = 3;
	while (factor * factor <= number)
	{
	if (number % factor == 0)
	{
	largestFactor = factor;
	number /= factor;
	}
	else
	{
	factor += 2;
	}
	}
	if (number > 1)
	{
	largestFactor = number;
	}
	return (largestFactor);
}
