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
}

/**
 * main - Entry point for the program
 *
 * Return: Returns value of  type int
 */
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
