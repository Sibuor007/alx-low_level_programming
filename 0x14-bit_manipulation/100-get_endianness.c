#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int y;
	char *ptr;

	y = 1;
	ptr = (char *)&y;
	return (*ptr);
}
