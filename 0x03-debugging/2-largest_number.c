#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: an integer
 * @b: an integer
 * @c: an integer
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int mx;

	if (a >= b && a >= c)
	{
		mx = a;
	}
	else if (b >= a && b >= c)
	{
		mx = b;
	}
	else
	{
		mx = c;
	}

	return (mx);
}
