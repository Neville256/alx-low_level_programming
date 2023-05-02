#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - linked list free memory
 * @head: free listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
