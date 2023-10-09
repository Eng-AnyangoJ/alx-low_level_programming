#include <stdio.h>

/**
* main - Printing no's 0-9 with combinations in ascending order
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
