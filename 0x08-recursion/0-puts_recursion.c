#include "main.h"
/**
 * _puts_recursion - is prints a string
 * @s: the input
 * Return: 0 always, success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
