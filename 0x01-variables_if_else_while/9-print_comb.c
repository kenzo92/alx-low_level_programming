#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints all the possible combination
 * of single digit numbers, follwed by a comma, and a space
 * varaible num of type int was declared and utilized in a for-loop
 * to utilize this effect
 * Return: main returns value of data type int
 */
int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
