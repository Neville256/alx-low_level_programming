#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - new node insert to linked list
 * @head: begin node to pointer in list
 * @idx: added index new node
 * @n: insert data in new node
 *
 * Return: NULL if fails or new node to pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *discover;
	listint_t *temp = *head;

	discover = malloc(sizeof(listint_t));
	if (!discover || !head)
		return (NULL);
	discover->n = n;
	discover->next = NULL;

	if (idx == 0)
	{
		discover->next = *head;
		*head = discover;
		return (discover);
	}

	for (k = 0; temp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			discover->next = temp->next;
			temp->next = discover;
			return (discover);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
