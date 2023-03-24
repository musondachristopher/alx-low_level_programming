#include "main.h"

/**
* _isalpha - function that checks for alphabets
*
* @c: the character to be checked
*
* Return: 1 if it is an alphabet 
* and 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && <= 90))
		return (1);
	else
		return (0);
}
