#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n is the number of times _ is printed
 * Return: 0 always
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int q;
		
		for (q = 1; q <= n; q++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
