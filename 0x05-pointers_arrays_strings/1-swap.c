#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * using two input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
