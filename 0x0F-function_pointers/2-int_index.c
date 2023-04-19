#include "function_pointers.h"
/**
 * int_index - if comparison = true return index, else -1
 * @array: array
 * @size: array size of elements
 * @cmp:  3 in main is a pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (a = 0; a < size; a++)
	{
	if (cmp(array[a]))
	return (a);
	}
	return (-1);
}
