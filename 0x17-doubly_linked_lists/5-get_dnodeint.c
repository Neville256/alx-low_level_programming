#include "lists.h"
/**
 * get_dnodeint_at_index - specific node of linked list to find
 * @head: beginning of list to pointer
 * @index: node to retrieve of index
 *
 * Return: index node to pointer or NULL fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (k = 0; k < index; k++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
