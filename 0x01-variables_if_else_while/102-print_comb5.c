#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;

for (i = 0; i < 98; i++)
{
for (j = i; j < 99; j++)
{
if (i != j)
{
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
putchar('0' + j / 10);
putchar('0' + j % 10);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}


