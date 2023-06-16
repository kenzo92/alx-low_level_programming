#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Description: This function returns text is positive,
 * is zero, or is negative, based on it's return value
 * Return: returns type int.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
