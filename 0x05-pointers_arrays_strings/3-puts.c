#include "main.h"
/**
 * _puts - put out the string
 * @str: string
 * Return: return the string
 *
 */
void _puts(char *str)
{
	if (*str != '\0')
	{
		while (*str)
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
