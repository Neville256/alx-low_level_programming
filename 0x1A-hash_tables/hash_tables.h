#ifndef __hash_tables__
#define __hash_tables__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - hash table of node
 *
 * @key: string , The key
 * Unique key is in hashtable
 * @value: key value corresponding
 * @next: pointer to next node of list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: array of sixe
 * @array: size of array @size
 * each cell of array is pointer to first node of linked list,
 * because we want our HashTable to use chaining collision handling
 */
typedef struct hash_table_s
{
	unsgined long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

unsigned long int hash_djb2(const unsigned char *str);

unsigned long int key_index(const unsigned char *key, unsigned long int size);

hash_node_t *set_pair(const char *key, const char *value);

int set_pair_only(hash_table_t *ht, const char *key,
		const char *value, unsigned long int size);

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

char *hash_table_get(const hash_table_t *ht, const char *key);

void hash_table_print(const hash_table_t *ht);

void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - sorted hash table of node
 *
 * @key: key, string
 * key is unique in hashtable
 * @value: corresponding to key value
 * @next: next node of list a pointer
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to next element of sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - sorted hash table data structure
 *
 * @size: array of size
 * @array: size of array @size
 * Each cell of this array pointer first node of linked list,
 * beacuse we want our hashtable use chaining collision handling
 * @shead: first element of sorted linked list of a pointer
 * @stail: sorted linked list last element of a pointer
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);

shash_node_t *set_spair(const char *key, const char *value);

shash_node_t *set_spair_only(shash_table_t *ht, const char *key,
		const char *value, unsigned long int index);

int update_value(shash_node_t *node, const char *value);

shash_node_t *set_spair_front(shash_table_t *ht, const char *key,
		const char *value, unsigned long int index);

int slist_set_first(shash_table_t *ht, shash_node_t *node);

int slist_set(shash_table_t *ht, shash_node_t *old_node, shash_node_t *node);

int slist_table_end(shash_table_t *ht, shash_node_t *node);

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

char *shash_table_get(const shash_table_t *ht, const char *key);

void shash_table_print(const shash_table_t *ht);

void shash_table_print_rev(const shash_table_t *ht);

void shash_table_delete(shash_table_t *ht);

#endif /*__hash_tables__ */
