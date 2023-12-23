#include "hash_tables.h"

/**
 * key_index - Get the index
 * @key: key to get the index of.
 * @size: size of the array of the hash table.
 * Return: index of the key.
 * Description: usage of the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
