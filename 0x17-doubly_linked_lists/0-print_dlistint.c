#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - elements of a dlistint_t list print all
 * @h: linked link start of pointer
 *
 * Return: nodes count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t k;

	for (k = 0; h != NULL; k++)
	{
		printf("%d\n", h->n);
		h = h->net;
	}
	return (k);
}
