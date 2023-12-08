#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: is the string
 * Return: 0 always, success
 */
int _strlen_recursion(char *s)
{
	int count = 0;
	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
