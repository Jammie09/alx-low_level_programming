#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	char alphabet[52];
	int i = 0;

	while (lowercase <= 'z')
	{
		alphabet[i] = lowercase;
		i++;
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		alphabet[i] = uppercase;
		i++;
		uppercase++;
	}

	alphabet[i] = '\0';
	printf("%s\n", alphabet);

	return (0);
}

