#include "main.h"

/**
 * _pow_recursion - return the lengt of a string
 * @x: input
 * @y: power
 * Return: value of string length
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
