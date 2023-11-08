#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two argument numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int y1 = 0, y2 = 0;

	if (argc == 3)
	{
		y1 = atoi(argv[1]);
		y2 = atoi(argv[2]);
		printf("%d\n", y1 * y2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
