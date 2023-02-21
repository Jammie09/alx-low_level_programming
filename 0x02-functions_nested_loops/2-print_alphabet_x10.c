#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times in lower case
 */

void print_alphabet_x10(void)
{
int j;
for (j = 0; j < 10; j++)
{
char letter = 'a';
int i;
for (i = 0; i < 26; i++)
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
