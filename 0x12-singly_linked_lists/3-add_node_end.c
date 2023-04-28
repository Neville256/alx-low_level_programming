#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - the end of linked list is added by new note
 * @head: list_list is a double pointer
 * @str: new node puts string
 *
 * Return: new element address or null if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *discover;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	discover = malloc(sizeof(list_t));
	if (!discover)
	return (NULL);

	discover->str = strdup(str);
	discover->len = len;
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
