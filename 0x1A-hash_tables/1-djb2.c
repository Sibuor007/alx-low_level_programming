#include "hash_tables.h"

/**
 * hash_djb2 - function to implement the djb2 algorithm.
 * @str: string to hash
 * Return: calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_;
	int m;

	hash_ = 5381;
	while ((m = *str++))
		hash_ = ((hash_ << 5) + hash_) + m;

	return (hash_);
}
