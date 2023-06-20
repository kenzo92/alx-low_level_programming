#include "main.h"

/**
 * print_alphabet_x10 - This function prints 10 lowercase of alphabet
 *
 * Description: The function uses nested loops to achieve this
 * variables i, and j of types int, and char respectively are
 * declared
 * Return: Always returns void
 */
void print_alphabet_x10(void)
{
int i;
char j;

i = 1;
while (i >= 1 && i <= 10)
{
j = 'a';
while (j >= 'a' && j <= 'z')
{
_putchar(j);
j++;
}
i++;
_putchar('\n');
}
}
