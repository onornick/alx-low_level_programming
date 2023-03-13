#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - muliplies 2 numbers
 * @argc: count
 * @argv: vector
 * Return: Always 0.
 *
 *
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	else
	{
		int num1 = atoi(argv[1]);

		int num2 = atoi(argv[2]);

		result = num1  * num2;
		printf("%d\n", result);
	}

	return (0);

}
