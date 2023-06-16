#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints English alphabets
 * in lowercase only
 * variable alpha_lower was declared and used to
 * hold each respective instance of alphabet
 * Return: The return value of main is of type int
 */
int main(void)
{
int alpha_lower;
for (alpha_lower = 'a'; alpha_lower <= 'z'; alpha_lower++)
{
putchar(alpha_lower);
}
putchar('\n');
return (0);
}
