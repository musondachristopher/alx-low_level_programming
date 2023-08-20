#include "main.h"
#include <stdio.h>

/**
* print_binary - prints binary equivalence of a dec_number.
*
* @n: numb to print in binary.
*/
void print_binary(unsigned long int n)
{
	int x1, count = 0;

	unsigned long int current;

	for (x1 = 63; x1 >= 0; x1--)
	{
		current = n >> x1;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
