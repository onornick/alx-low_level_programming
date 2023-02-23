#include "main.h"
/**
 * _isupper - returns 1 if c is uppercase, else returns 0
 */

int _isupper(int c)
{
	int i;
	for(i = 65; i < 90; i++)
	{
	if(c == i)
		return (1);
	else
		return (0);
	
	}

}
