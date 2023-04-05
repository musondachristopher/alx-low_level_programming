#include "main.h"

/**
 * _strlen_recursion - prints the lengthe of the string
 * @s: the string length
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
