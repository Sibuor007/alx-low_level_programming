#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: _number on success, 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int _number;
	int j;

	_number = 0;

	if (b == NULL)
	return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		_number <<= 1;
		if (b[j] == '1')
		_number = _number + 1;
	}
	return (_number);
}
