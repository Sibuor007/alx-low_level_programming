#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * to get from one number to another
 * @n: number
 * @m: number_1
 * Return: bit_size
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, bit_size = 0;
	unsigned long int _pos;
	unsigned long int _bit_xor = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		_pos = _bit_xor >> j;
		if (_pos & 1)
		bit_size++;
	}

	return (bit_size);
}
