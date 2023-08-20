#include "main.h"
#include <stdio.h>

/**
* set_bit - this function sets the bit at a given index = 1.
*
* @n: is a pointer.
* @index: index of the bit =  0.
*
* Return: returns success 1 or -1 for failure.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
