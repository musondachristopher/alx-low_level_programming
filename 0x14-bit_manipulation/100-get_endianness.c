#include <stdio.h>
#include "main.h"

/**
* get_endianness - a C function that checks for endianness.
*
* Return: 0 if num is big_endian,1 if num is small_endian
* 
*/
int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *) &e;

	return (*c);
}
