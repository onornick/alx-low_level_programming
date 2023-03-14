#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds up command line arguments
 * @argc: Argument count
 * @argv: Argument vectors
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int result = 0, i, j;

	if (argc < 2)
	{
		printf("%d\n", result);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}

