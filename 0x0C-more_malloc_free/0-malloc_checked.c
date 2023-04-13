#include <stdlib.h>
#include "main.h"

/**
  * *malloc_checked - malloc uses memory allocated
  *@b: allocate the count of bytes
  *
  *Return: memory allocation to a pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
