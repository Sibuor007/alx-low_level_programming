#include "main.h"
/**
 * factorial - writes the factorial of a number
 * @n: is the input
 * Return: 0 always, success
 */
int factorial(int n)
{	
	int fact;
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
       		fact = n * factorial(n-1);
       		return (fact);
	}
}
