#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds up cmd arguments
 * @argc: argument count
 * @argv: argument vectors
 * Return: Always 0;
 *
 *
 */

int main(int argc, char *argv[])
{
	int result;
	int i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
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
	printf("%d", result);
	return (0);
}
