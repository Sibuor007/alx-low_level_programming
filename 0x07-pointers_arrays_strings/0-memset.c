#include "main.h"
/**
 * _memset - fills a block of memory with agiven value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: @s is return upon sucess
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
