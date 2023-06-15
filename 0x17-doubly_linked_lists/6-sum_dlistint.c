#include "lists.h"
/**
 * sum_dlistint - all of the data of dlistint_t linked list sumas all
 * @head: begininng of linked list
 *
 * Return: all data of sum, or 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
