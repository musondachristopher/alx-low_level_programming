#include <unistd.h>


/**
 *
 * _putchar - writes the character c to stdout
 * @c
 * Return: On success 1
 * oon error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
