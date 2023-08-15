#include "main.h"

/**
 * _abs - return abs value.
 * @n: The number to be checked.
 *
 * Return: n if @n is postive or 0, -n otherwise.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
