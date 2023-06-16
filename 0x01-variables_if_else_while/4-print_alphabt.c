#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints all lowercase letters
 * of the English alphabet, asides letters e and q
 * variable alpha of type char was declared
 * Return: main returns data of type int
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'e' && alpha != 'q')
{
putchar(alpha);
}
}
putchar('\n');
return (0);
}
