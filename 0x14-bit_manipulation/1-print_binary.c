#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: _number
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int _number;
	unsigned int x;

	_number = 1;
	for (x = 1; x <= power; x++)
	_number = _number * base;
	return (_number);
}

/**
 * print_binary - function that prints a number in binary
 * @n: the number in question
 * Return: no return value
 */

void print_binary(unsigned long int n)
{
	unsigned long int _factor, _confirm;
	char checker;

	checker = 0;
	_factor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (_factor != 0)
	{
		_confirm = n & _factor;
		if (_confirm == _factor)
		{
			checker = 1;
			_putchar('1');
		}
		else if (checker == 1 || _factor == 1)
		{
			_putchar('0');
		}
		_factor >>= 1;
	}
}
