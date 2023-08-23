#include "hash_tables.h"

/**
 * key_index - Gives index of key.
 * @key: key, a string.
 * @size: size of array of hash table.
 *
 * Return: index number for key/value pair in hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
