#include "main.h"

/**
 * _isupper - check for uppercase character.
 * @c: The Character to be checked.
 *
 * Return: 1 if @c: uppercase otherwise 0.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
