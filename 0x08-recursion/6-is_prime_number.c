#include "main.h"

/**
 * is_prime_number - a function to find if the prime number
 * @n: number to be checked if is a prime number
 * @i: number of inputs
 * Return: 1 if prime,0 if not prime
 */

int is_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
