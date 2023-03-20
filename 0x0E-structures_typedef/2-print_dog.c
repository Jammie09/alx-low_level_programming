#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the contents of a struct dog, including
 * its name, age, and owner. If any of these fields are NULL, the function
 * prints the string "(nil)" instead. If the pointer to the struct dog is NULL,
 * the function does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

