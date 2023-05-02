#include "lists.h"
#include <stdio.h>

/**
 *listint_len - number of elemtns returned in linked list
 *@h:list of linked list type listint_t
 *
 * Return: nodes count
 */
size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}
	return (digit);
}
