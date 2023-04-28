#include <stdlib.h>
#include "lists.h"

/**
 * list_len - executes amount of elements in a linked list
 * @h: list_t list to pointer
 *
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}

	return (m);
}
