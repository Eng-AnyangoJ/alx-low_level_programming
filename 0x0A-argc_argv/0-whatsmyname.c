#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name
 *
 * argc: number of command line arguments
 * argv: array containing command line arguments
 *
 * Return: (0) SUCCESS
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
