#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - removes linked list head node
 * @head: begin element in linked list
 *
 * Return: elements deleted data inside
 * or 0 empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int digit;

	if (!head || !*head)
		return (0);
	digit = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (digit);
}
