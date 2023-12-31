#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: is the input
 * Return: 0 always
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion - recurses to find the natural 
 * square root of the number
 * @n: the input
 * @i: the iterator
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (real_sqrt_recursion(n, i + 1));
}
