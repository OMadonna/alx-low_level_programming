#include "main.h"
/**
 * print_rev - print string in revrese order
 * @s: the string
 * Return: return string
 *
 */
void print_rev(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		/* Calculate the length of the string */
		while (s[length] != '\0')
			length++;

		/* Print the characters in reverse order */
		for (length--; length >= 0; length--)
			_putchar(s[length]);
	}

	_putchar('\n');
}
