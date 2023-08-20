#include <stdio.h>
#include "main.h"

/**
* flip_bits - function counts the number of bits to change
*		by change from one number to another
*
* @n1: first number
* @m: the second number.
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n1, unsigned long int m)
{
	int n1, count = 0;

	unsigned long int current;
	unsigned long int exclusive = n1 ^ m;

	for (n1 = 63; n1 >= 0; n1--)
	{
		current = exclusive >> n1;
		if (current & 1)
		count++;
	}
	return (count);
}
