#include <stdio.h>
#include <stdlib.h>

/**
 * Main - the entry of code
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
