#include "main.h"
#include <stdlib.h>
/**
 * str_concat - combine two strings 
 * and add together for size
 * @s1: input one to overall
 * @s2: input two to overall
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *overall;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	overall = malloc(sizeof(char) * (i + j + 1));

	if (overall == NULL)
		return (NULL);
	i = 0; 
	j = 0;
	while (s1[i] != '\0')
	{
		overall[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		overall[i] = s2[j];
		i++, j++;
	}
	overall[i] = '\0';
	return (overall);
}
