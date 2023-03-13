#include "main.h"
#include <stdio.h>

/**
 *
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
