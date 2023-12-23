#include "main.h"

/**
 * * _memset - funct that fills mem area
 * * @s: pointer
 * * @b: constant byte
 * * @n: mem area byte
 * * Return: pointer
 * */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
