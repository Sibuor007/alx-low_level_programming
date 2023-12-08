#include"main.h"

/**
 * get_bit - function that sets the value of
 *  a bit to 1 at a given index
 * @n: the number in question
 * @index: position to check the bit
 * Return: 0 on success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int _factor, _examiner;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	_factor = 1 << index;
	_examiner = n & _factor;
	if (_examiner == _factor)
		return (1);
	return (0);
}
