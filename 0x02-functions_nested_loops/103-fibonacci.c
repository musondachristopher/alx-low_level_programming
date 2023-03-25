#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{

	int a = 1;
	int b = 2;
	int c;
	sum = 2;

	while (b <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
