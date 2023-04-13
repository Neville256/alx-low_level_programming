#include <stdlib.h>
#include "main.h"

/**
 * *_memset - constant byte is filled with memory
 * @s: area to be filled with memory
 * @b: copy to char
 * @n: count times to copy b
 *
 * Return: area s has pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

/**
 * *_calloc - array allocates memory
 * @nmemb: count elements in the array
 * @size: element size
 *
 * Return: memory allocates pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

