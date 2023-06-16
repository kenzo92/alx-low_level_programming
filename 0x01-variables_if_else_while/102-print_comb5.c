#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints all possible combinations
 * of two two-digit numbers
 * variables i, j, tens_i, unit_i, tens_j, and unit_j
 * all of type int were declared
 * Return: main returns data of type int
 */
int main(void)
{
int i, j, tens_i, unit_i, tens_j, unit_j;
for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
tens_i = i / 10;
unit_i = i % 10;
tens_j = j / 10;
unit_j = j % 10;
putchar('0' + tens_i);
putchar('0' + unit_i);
putchar(' ');
putchar('0' + tens_j);
putchar('0' + unit_j);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
