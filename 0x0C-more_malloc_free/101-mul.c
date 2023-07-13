#include "main.h"
#include <stdlib.h>

/**
 * multiply - This function returns the product of two integers
 * @num1: Parameter that copies the value of the first number
 * @num2: Parameter that copies the value of the second number
 *
 * Return: Returns data of type unsigned long
 */

unsigned long multiply(unsigned long num1, unsigned long num2)
{
	return (num1 * num2);
}

/**
 * is_numeric - This function checks if a string contains only numeric
 * characters
 * @s: Digit string to be checked
 *
 * Return: Returns data of type int
 */

int is_numeric(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * printNumber - This function prints a long integer
 * @number: Long integer to be printed
 *
 * Return: Nothing
 */

void printNumber(unsigned long number)
{
	char digits[20];
	int i;

	if (number == 0)
	{
		_putchar('0');
		return;
	}

	i = 0;
	while (number > 0)
	{
		digits[i++] = '0' + (number % 10);
		number /= 10;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(digits[i]);
	}
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments array
 *
 * Return: Returns data of type int
 */

int main(int argc, char *argv[])
{
	unsigned long num1, num2;
	unsigned long int product;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (!(is_numeric(argv[1])) || !(is_numeric(argv[2])))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	product = multiply(num1, num2);

	printNumber(product);

	_putchar('\n');

		return (0);
}
