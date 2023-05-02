#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - linked list reversed
 * @head: first node to pointer
 *
 * Return: begin node to pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}
	*head = last;
	return (*head);
}
