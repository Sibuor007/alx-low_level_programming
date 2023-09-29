#include "main.h"
/** 
 * _memset - inserts a block of memory with given value 
 * @s: base address of memory to be filled 
 * @b: the given value 
 * @n: number of bytes 
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n) 
{ 
	int a = 0; 
	
	for (; n > 0; a++) 
	{
	       	s[a] = b; n--; 
	} 
	return (s); 
}
