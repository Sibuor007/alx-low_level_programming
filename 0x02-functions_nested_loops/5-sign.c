#include"main.h"
/**
 * print_sign - prints the sign of the number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints zero is n is 0
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
