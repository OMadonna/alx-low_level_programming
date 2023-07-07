#include "main.h"

/**
 * factorial - printing the factorial n
 *
 * @n: the nfactorial to be printed
 *
 * Return: -1 to indicate error and 1 for zero factorial
 *
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
