#include <stdio.h>
/**
 * main - print the name of the file it was compiled from, 
 * followed by a new line
 * Return int
 */
int main(void)
{
	printf("Name of source file: %s\n", __FILE__);

	return (0);
}
