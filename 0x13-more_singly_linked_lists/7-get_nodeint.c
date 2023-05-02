#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - executes node at index in linked list
 * @head: begin node in linked list
 * @index: return node of index
 *
 * Return: node to pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}
	return (temp ? temp : NULL);
}
