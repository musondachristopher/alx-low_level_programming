#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: the number to be found
 * @root: the square root
 * Return: root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root = _sqrt_recursion(n / 2) * 2;
		if (root * root > n)
		{
			root--;
		}
		return (root);
	}
}
