#include "main.h"
/**
 * * _strncat - func to combine two strings
 * * @dest: destination string
 * * @src: src string
 * * @n: bytes of src
 * * Return: dest
 * */

char *_strncat(char *dest, char *src, int n)
{
	int var_0 = 0, var_1 = 0;

	while (*(dest + var_0) != '\0')
	{
		var_0++;
	}

	while (var_1 < n)
	{
		*(dest + var_0) = *(src + var_1);
		if (*(src + var_1) == '\0')
			    break;
		var_0++;
		var_1++;
	}
	return (dest);
}
