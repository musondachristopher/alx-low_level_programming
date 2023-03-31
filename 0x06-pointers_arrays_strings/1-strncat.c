include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: the source string
 * @n: number of chars to be appended
 * Return: the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen  = 0;
	int srclen =  0;
	int i;	
	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0'; i++)
		scrlen++;
	for (i = 0 ; i < scrlen ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
