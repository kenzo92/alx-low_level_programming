#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints the sum of all the even Fibonacci
 * terms below 4000000
 * Return: Always 0
 */

int main(void)
{
	long int sum, first_num, second_num, fibonacci;
	int i;

	first_num = 1;
	second_num = 2;
	sum = 2;

	for (i = 3; i < 50; i++)
	{
	fibonacci = first_num + second_num;
	if (fibonacci <= 4000000 && fibonacci % 2 == 0)
	{
	sum += fibonacci;
	}
	first_num = second_num;
	second_num = fibonacci;
	}
	printf("%ld\n", sum);
	return (0);
}
