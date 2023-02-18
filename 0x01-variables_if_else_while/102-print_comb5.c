#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l;

for (i = 0; i < 100; i++)
{
j = i / 10;
k = i % 10;
for (l = 0; l < 100; l++)
{
j = l / 10;
k = l % 10;
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
putchar('0' + l / 10);
putchar('0' + l % 10);
putchar(' ');
if (l % 10 == 9)
{
putchar('\n');
}
}
}
return (0);
}


