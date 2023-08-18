#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * main_funct - function generates and prints
 *	passwords for the crackme5 executable.
 * @argc: number  of arguments supplied to the program.
 * @argv: an array of pointers to the arguments
 * Return: Success is  0
 */
int main_funct(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *codex;
	int len = strlen(argv[1]), x, tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	pass[0] = codex[tmp];

	tmp = 0;
	for (x = 0; x < len; x++)
		tmp += argv[1][x];
	pass[1] = codex[(tmp ^ 79) & 63];

	tmp = 1;
	for (x = 0; x < len; x++)
		tmp *= argv[1][x];

	pass[2] = codex[(tmp ^ 85) & 63];

	tmp = 0;
	for (x = 0; x < len; x++)
	{
		if (argv[1][x] > tmp)
			tmp = argv[1][x];
	}
	srand(tmp ^ 14);
	pass[3] = codex[rand() & 63];

	tmp = 0;
	for (x = 0; x < len; x++)
		tmp += (argv[1][x] * argv[1][x]);

	pass[4] = codex[(tmp ^ 239) & 63];
	for (x = 0; x < argv[1][0]; x++)
		tmp = rand();

	pass[5] = codex[(tmp ^ 229) & 63];
	pass[6] = '\0';
	printf("%s", pass);

	return (0);
}
