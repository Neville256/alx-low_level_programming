#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table.
 * @size: size, in number of nodes to make new hash table.
 *
 * Return: a pointer to newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int k = 0;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	free(ht);
	return (NULL);
	}

	for (; k < size; k++)
	ht->array[k] = NULL;

	return (ht);
}
