#include "main.h"

/**
 * _pow_recursion - printing number raised another
 *
 * @y: the number beign raised
 * @x: the number that will raise another
 * Return: if y is lower than 0 return 1
 *
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
