#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator-  a function that executes a function given as a parameter
 * @size: size of the array
 * @action: pointer to the function
 * @array: array to be executed
 * @Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || array == NULL || action == NULL)
	{
		return;
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
