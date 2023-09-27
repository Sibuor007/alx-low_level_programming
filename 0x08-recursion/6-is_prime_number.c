#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number
 * @n: input
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	return (real_prime(n, n-1));
}
/**
 * real_prime - checks if number is prime
 * @n: input
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */
int real_prime(int n, int i)
{
	if (i == 1)
	{
		return 1;
	}
	if (n % i == 0 && i > 0)
	{
		return 0;
	}
	return (real_prime(n, i-1));
}
