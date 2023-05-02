#include "lists.h"
#include <stdio.h>
/**
 * print_listint - all elemnets of linked list executed
 * @h: type of list_int to print linked lists
 *
 * Return: nodes count
 */
size_t print_listint(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		printf("%d\n", h->n);
		digit++;
		h = h->next;
	}
	return (digit);
}
