#include "main.h"
/**
* _strlen - the function that returns the length of a string
* @s: the string
* Return: length
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
