#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with a new character, followed by a newline
 * @str: is the string
 * Return: 0 always
 */

void puts2(char *str)
{
	int longj = 0;
	int q = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		longj++;
	}
	q = longj - 1;
	for (o = 0; o <= q; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
