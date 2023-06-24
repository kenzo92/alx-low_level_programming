#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints the first fifty terms of
 * the Fibonacci sequence. Variables first_num, second_num, and
 * fibonacci, each of the long long int data type are declared
 * Return: Void
 */

int main(void)
{
	long int first_num, second_num, fibonacci;
	int i;

	first_num = 1;
	second_num = 2;
	printf("%ld, ", first_num);
	printf("%ld, ", second_num);

	for (i = 3; i <= 50; i++)
	{
	fibonacci = first_num + second_num;
	if (i != 50)
	{
	printf("%ld, ", fibonacci);
	first_num = second_num;
	second_num = fibonacci;
	}
	else
	{
	printf("%ld", fibonacci);
	}
	}
	printf("\n");
	return (0);
}
