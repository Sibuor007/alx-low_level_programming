#include "main.h"
#include <stdio.h>
/**
 * * _isupper - func that checks for uppercase
 * * @c: character to be checked
 * * Return: 0 on failure, 1 on success
 * */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
