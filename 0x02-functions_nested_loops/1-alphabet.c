#include "main.h"

/**
 * print_alphabet - This function returns lowercase English letters
 *
 * Return: Returns lowercase alphabets to main
 */
void print_alphabet(void)
{
char i;
i = 'a';
while (i >= 'a' && i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
