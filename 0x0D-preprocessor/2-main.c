#include <stdio.h>
/**
 * main - print the name of the file it was compiled from, 
 * followed by a new line
 * Return 0
 */
int main(void)
{
	print("%s\n", __FILE__);
	return (0);
}
