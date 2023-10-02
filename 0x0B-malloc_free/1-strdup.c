#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that duplicate to 
 * new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *kk;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	kk = malloc(sizeof(char) * (i + 1));

	if (kk == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		kk[r] = str[r];

	return (kk);
}
