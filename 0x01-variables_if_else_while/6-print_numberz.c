#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints all possible single digit number.
 * variable i, of type int was declared
 * Return: main returns value of type int
 */
int main(void)
{
int i;
int num;
num = '9';
for (i = '0'; i <= num; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
