#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: the number in question
 * @index: position
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
