#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of arguments positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int x;
	unsigned int y, sum = 0;
	char *j;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			j = argv[x];

			for (y = 0; y < strlen(j); y++)
			{
				if (j[y] < 48 || j[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(j);
			j++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
