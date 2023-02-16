#include <stdio.h>
/**
 * main - A c program that prints the size of various types of variables
 * Return: 0
 */
int main(void)
{
char j;
int a;
long int m;
long long int e;
float s;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(j));
Printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
Printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(m));
Printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
Printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(s));
return (0);
}
