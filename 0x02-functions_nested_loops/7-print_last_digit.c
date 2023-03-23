#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @c: the character to be traeated
* Return: value of the last digit of number or 0 for anything else
*/

int print_last_digit(int n)

{
	int last;
	
	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
