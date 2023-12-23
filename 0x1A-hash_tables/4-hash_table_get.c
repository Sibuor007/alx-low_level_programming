#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve the value
 * @ht: pointer to the hash table.
 * @key: key to get the value of
 * Return: value on success, 0 on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	temp = ht->array[idx];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	return ((temp == NULL) ? NULL : temp->value);
}
