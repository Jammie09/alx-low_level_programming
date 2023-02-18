#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	printf("Lowercase alphabet: ");
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	printf("\n");

	printf("Uppercase alphabet: ");
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	printf("\n");

	return (0);
}

