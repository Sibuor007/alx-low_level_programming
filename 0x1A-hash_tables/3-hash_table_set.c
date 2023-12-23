#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element
 * @ht: pointer to the hash table.
 * @key: key to add - cannot be an empty string.
 * @value: value associated with key.
 * Return: 0 on failure, 1 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_n;
	char *value_cp;
	unsigned long int idx, k;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (k = idx; ht->array[k]; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = value_cp;
			return (1);
		}
	}

	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
	{
		free(value_cp);
		return (0);
	}
	new_n->key = strdup(key);
	if (new_n->key == NULL)
	{
		free(new_n);
		return (0);
	}
	new_n->value = value_cp;
	new_n->next = ht->array[idx];
	ht->array[idx] = new_n;

	return (1);
}
