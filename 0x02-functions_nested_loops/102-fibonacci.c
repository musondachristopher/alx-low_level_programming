#include <stdio.h>

/**
 * fib - fibonacci function
 *
 * Return: always 0
 */
int main(void)
{
	int fib[50] = {1, 2};
	int i;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < 50; i++)
	{
		printf("%d", fib[i]);
		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
