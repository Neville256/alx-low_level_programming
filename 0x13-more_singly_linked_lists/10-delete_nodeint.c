#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * delete_nodeint_at_index - node deltes in a linked list
 * @head: begin element in list to pointer
 *@index: delete node of index
 * Return: 1(success and -1(fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *latest = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (k < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}
	latest = temp->next;
	temp->next = latest->next;
	free(latest);
	return (1);
}
