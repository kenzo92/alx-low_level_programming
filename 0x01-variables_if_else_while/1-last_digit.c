#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Description: This function returns the last digit
 * of some randomly generated number, along with some
 * descriptive text
 * two variables, n and digit, each of types int are declared
 * in main
 * Return: main returns data of type int.
 */
int main(void)
{
int n;
int digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, digit);
}
if (digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, digit);
}
if (digit < 6 && digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
}
return (0);
}
