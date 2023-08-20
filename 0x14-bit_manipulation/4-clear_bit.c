#include <stdio.h>
#include "main.h"

/**
* clear_bit - funxn sets the value of a given bit = 0.
*
* @n: pointer.
* @index: index.
*
* Return: either returns success 1 or -1 for failure.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
