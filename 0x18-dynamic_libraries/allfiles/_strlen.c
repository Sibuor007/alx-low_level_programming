#include "main.h"
/**
 * * _strlen - func to find the length
 * * @s: pointer
 * * Return: length
 * */


int _strlen(char *s)
{
	int size = 0;
	while (s[size])
		size++;

	return (size);
}
