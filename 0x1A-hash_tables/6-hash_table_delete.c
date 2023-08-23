#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int k = 0;
	hash_node_t *node;

	while (k < ht->size)
	{
		while (ht->array[k] != NULL)
		{
			node = ht->array[k]->next;
			free(ht->array[k]->key);
			free(ht->array[k]->value);
			free(ht->array[k]);
			ht->array[k] = node;
		}
		k++;
	}
	free(ht->array);
	free(ht);
}
