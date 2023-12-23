#include "main.h"

/**
 * * _isdigit - func that checks if parameter is between 0 to 9.
 * * @c: input
 * * Return: 0 on failure, 1 on success
 * */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
