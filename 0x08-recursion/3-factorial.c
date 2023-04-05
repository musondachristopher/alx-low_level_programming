#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: the number to be found
 * Return: error code if message is negative,else return 1 if n is 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
