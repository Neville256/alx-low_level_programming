#include "lists.h"
/**
 * dlistint_len - number of nodes in linked list count
 * @h: start of linked list to pointer
 *
 * Return: count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t k;

	for (k = 0; h != NULL; k++)
		h = h->next;
	return (k);
}
