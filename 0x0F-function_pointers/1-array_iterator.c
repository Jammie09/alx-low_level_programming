#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a new line
 * @array: pointer to the array to iterate over
 * @size: size of the array
 * @action: pointer to the function to apply to each element of the array
 *
 * Description: This function takes in an array of integers, and a pointer to
 * over each element in the array and
 *applies the provided function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

