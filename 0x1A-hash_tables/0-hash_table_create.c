#include "hash_tables.h"

/**
 * hash_table_create - func to create hash table.
 * @size: size of the array
 * Return: a pointer to the new hash table, error if NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *temp;
	unsigned long int k;

	temp = malloc(sizeof(hash_table_t));
	if (temp == NULL)
		return (NULL);

	temp->size = size;
	temp->array = malloc(sizeof(hash_node_t *) * size);
	if (temp->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		temp->array[k] = NULL;

	return (temp);
}
