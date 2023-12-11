#include "main.h"

/**
 * * _strcat - func that appends string
 * * @dest: destination string
 * * @src: source string
 * * Return: pointer to string
 * */

char *_strcat(char *dest, char *src)
{
	int m, n;

	m = n = 0;
	while (*(dest + m))
		m++;
	while ((*(dest + m) = *(src + n)))
	{
		m++;
		n++;
	}
	return (dest);
}
