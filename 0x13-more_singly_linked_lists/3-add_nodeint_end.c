#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - node added at end of linked list
 * @head: first element in list to pointer
 * @n: in discovered element insert data
 *
 * Return: pointer to discovered node, or if NULL fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *discover;
	listint_t *temp = *head;

	discover = malloc(sizeof(listint_t));
	if (!discover)
		return (NULL);
	discover->n = n;
	discover->next = NULL;

	if (*head == NULL)
	{
		*head = discover;
		return (discover);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = discover;

	return (discover);
}
