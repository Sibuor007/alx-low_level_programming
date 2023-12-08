#include "main.h"

/**
 * set_bit - a function that sets the value of
 * a bit to 1 at a given index
 * @n: the number in question
 * @index: position for bit set
 * Return: 1 on success, and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _bit_set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	_bit_set = 1 << index;
	*n = *n | _bit_set;
	return (1);
}
