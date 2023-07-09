#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	if (*s != '\0')
	{
		/* Calculate the length of the string */
		while (s[length] != '\0')
			length++;

		end = length - 1;

		/* Reverse the string by swapping characters */
		while (start < end)
		{
			/* Swap characters */
			temp = s[start];
			s[start] = s[end];
			s[end] = temp;

			/* Move to the next pair of characters */
			start++;
			end--;
		}
	}
}
