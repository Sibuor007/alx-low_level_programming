#include "main.h"

/**
 * * _memcpy - function that copy copy mem area
 * * @dest:return value
 * * @src: mem area src
 * * @n: bytes from mem area
 * * Return: dest
 * */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
