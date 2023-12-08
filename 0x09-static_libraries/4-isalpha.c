#include "main.h"
/**
* _isalpha - examines alphabetic character
* @c: the character
* Return: 1 on success, 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
