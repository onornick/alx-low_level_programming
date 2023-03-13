#include "main.h"
#include <stdio.h>

/**
 * main - prints all commandline arguments
 * @argc: count
 * @argv: vectors
 * Return: Always 0
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
