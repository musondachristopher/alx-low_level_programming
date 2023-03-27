#include "main.h"
/**
 * _puts - print stdio
 * @str: the string to print
 * Return: the legth of the str
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
