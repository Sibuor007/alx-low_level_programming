#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n is the number of times \ should be printed
 * Return: 0 always
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s, t;

		for (s = 0; s < n; s++)
		{
			for (t = 0; t < n; t++)
			{
				if (t == s)
					_putchar('\\');
				else if (t < s)
					_putchar(' ');
			}	
			_putchar('\n');
		}
	}
}
