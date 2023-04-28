#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node added in begining of list
 * @head: list_t list has a double pointer
 * @str: add node to new string
 *
 * Return: address of new element, or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
	}
