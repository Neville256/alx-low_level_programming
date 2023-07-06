#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with a key.
 * @ht: pointer to hash table array.
 * @key: key, string cannot be empty.
 *
 * Return: value associated with key, or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
		return (NULL);
}
