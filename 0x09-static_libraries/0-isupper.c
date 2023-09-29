#include "main.h"
/**
 * _isupper - represents uppercase letters
 * @c: character to be checked
 * Return: 0 on success, 1 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
