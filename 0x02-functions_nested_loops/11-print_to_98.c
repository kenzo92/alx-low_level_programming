#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This function prints natural numbers
 * @n: Parameter that copies the value of intger to
 * begin printing from
 *
 * Return: returns void
 */
void print_to_98(int n)
{
int i;

i = n;
if (n == 98)
{
printf("%d\n", n);
}
else if (n > 98)
{
for (n = i; n >= 98; n--)
{
	if(n == 98)
	{
	printf("%d", n);
	}
	else
	{
	printf("%d, ", n);
	}
}
printf("\n");
}
else if (n == 0 || n < 98)
{
for (n = i; n <= 98; n++)
{
	if (n == 98)
	{
	printf("%d", n);
	}
	else
	{
	printf("%d, ", n);
	}
}
printf("\n");
}
}
