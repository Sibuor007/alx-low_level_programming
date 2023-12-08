#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a newline
 * @s: is the string
 * Return - 0 always
 */

void print_rev(char *s)
{
	int longj = 0;
	int o;

	while (*s != '\0')
	{
		longj++;
		s++;
	}
	s--;
	for (o = longj; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
