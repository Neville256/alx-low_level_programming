#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - each array printerd on a  newl
 * @array: array
 * @size: number of elements to print
 * @action: regular or hex pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL)
		return;

	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}
