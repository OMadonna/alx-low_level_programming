#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	if (*s != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		for (i = 0, j = i; i < j; i++, j--)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
	}

}
