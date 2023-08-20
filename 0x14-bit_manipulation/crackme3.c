#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <password>\n", argv[0]);
		return 1;
	}

	char *password = "'cat 101-password`";

	if (strcmp(argv[1], password) == 0)
	{
		printf("Congratulations!\n");
	}
	else
	{
		printf("Try again.\n");
	}

	return 0;
}
