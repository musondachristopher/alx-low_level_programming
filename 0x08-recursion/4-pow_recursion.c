#include "main.h"

/**
 * _pow_recursion - prints the power of two numbers
 * @y: the y member
 * @x: the x member
 * Return: -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
