#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a discovered  node at start of linked list
 * @head: first node pointer in list
 * @n: discover node to insert data
 *
 * Return: node discover pointer, or failed null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *discover;

	discover = malloc(sizeof(listint_t));
	if (!discover)
		return (NULL);
	discover->n = n;
	discover->next = *head;
	*head = discover;

	return (discover);
}
