#include"main.h"
#include<unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: is the character to print
 * Return: 1 indicates sucess
 * -1 indicates error, while error is set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
