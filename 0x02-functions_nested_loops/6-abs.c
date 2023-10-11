#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @s: integer to be computed
 *
 * Return: absolute value of integer
 */
int _abs(int s)
{
	if (s < 0)
	{
		int abs_val;

		abs_val = s * -1;

		return (abs_val);
	}

	return (s);
}
