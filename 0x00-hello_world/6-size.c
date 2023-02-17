#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char j;
int a;
long int m;
long long int e;
float s;

printf("Size of a char: %zu bytes(s)\n", (unsigned long) sizeof(j));

printf("Size of a int: %zu bytes(s)\n", (unsigned long) sizeof(a));

printf("Size of a long int: %zu bytes(s)\n", (unsigned long) sizeof(m));

printf("Size of a long long int: %zu bytes(s)\n", (unsigned long) sizeof(e));

printf("Size of a float: %zu bytes(s)\n", (unsigned long) sizeof(s));

return (0);
}
