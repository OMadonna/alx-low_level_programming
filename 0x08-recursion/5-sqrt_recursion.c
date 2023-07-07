#include "main.h"

/**
 * _sqrt_a - prints natural sqrt of a number
 *
 * @a: the number to be worked on
 * @b: iterator
 * Return: returns -1 and natural sqrt number
 *
 */

int _sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: the input number
 * Return: returns the natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_a(n, 0));
}
