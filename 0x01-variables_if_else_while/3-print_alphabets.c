#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints lowercase and uppercase
 * English alphabets
 * A variable of type char is declared in main to hold each given
 * instance of alphabet at any point during the iteration.
 * Return: main returns value of type int
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
for (alpha = 'A'; alpha <= 'Z'; alpha++)
{
putchar (alpha);
}
putchar ('\n');
return (0);
}
