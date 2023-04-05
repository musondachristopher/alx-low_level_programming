#include "main.h"

/**
 * is_palindrome - function that checks if a string is palondrome
 * @s: string to be checked
 * Return: 1 if palindrome,0 if not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
