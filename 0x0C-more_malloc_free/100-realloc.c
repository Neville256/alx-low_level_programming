#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - using malloc and free it reallocates memory
 * @ptr: malloc previously allocates memory
 * @old_size: ptr allocates memory size
 * @new_size: new memory block has got a new size
 *
 * Return: newly allocated memory has got a new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int f;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (f = 0; f < new_size; f++)
			ptr1[f] = old_ptr[f];
	}

	if (new_size > old_size)
	{
		for (f = 0; f < old_size; f++)
			ptr1[f] = old_ptr[f];
	}

	free(ptr);
	return (ptr1);
}
