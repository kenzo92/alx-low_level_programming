#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints the first 98 terms
 * of the Fibonacci sequence
 * Return: Always 0
 */

int main(void)
{
	long int first_num, second_num, fibonacci;
	int i;

	first_num = 1;
	second_num = 2;
	printf("%ld ,", first_num);
	printf("%ld ,", second_num);

	for (i = 3; i <= 98; i++)
	{
		fibonacci = first_num + second_num;
		if (i != 98)
		{
			printf("%ld, ", fibonacci);
		}
		else
		{
			printf("%ld", fibonacci);
		}
		first_num = second_num;
		second_num = fibonacci;
	}
	printf("\n");
	return (0);
}
