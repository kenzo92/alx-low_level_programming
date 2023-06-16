#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints all the lowercase letters
 * of the English alphabet in reverse order
 * variable alpha of type char was declared
 * Return: main returns value of type int
 */
int main(void)
{
char alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
