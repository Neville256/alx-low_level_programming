#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - adds up sum of all data in listint_t
 * @head: begin node in linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);

}
