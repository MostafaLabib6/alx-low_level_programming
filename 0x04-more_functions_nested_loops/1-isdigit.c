#include "main.h"

/**
 * _isdigit - check for number.
 * @c: The Number to be checked.
 *
 * Return: 1 if @c: number otherwise 0.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
