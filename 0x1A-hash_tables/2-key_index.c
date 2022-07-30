#include "hash_tables.h"

/**
 * key_index - generates the key using hash_djb2
 * @key: The key to get the index of
 * @size: The size of the array of hash table
 * Return: index key
 * Description: uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
