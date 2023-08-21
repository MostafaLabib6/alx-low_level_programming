#include "main.h"

/**
 * swap_int : swap two integers
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
