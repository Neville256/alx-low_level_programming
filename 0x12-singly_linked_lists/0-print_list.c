#include <stdio.h>
#include "lists.h"

/**
 * print_list - executes all elment of linked list
 * @h: list to print is pointer to the list_t
 *
 * Return: printed number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		k++;
		h= h->next;
	}
	return (k);
	}
