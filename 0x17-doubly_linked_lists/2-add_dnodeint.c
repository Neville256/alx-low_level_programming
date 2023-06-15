#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - beginning of linked list added to new node
 * @head: pointer beginning of linked list to double
 * @n: add new node calue
 *
 * Return: new node to pinter, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
