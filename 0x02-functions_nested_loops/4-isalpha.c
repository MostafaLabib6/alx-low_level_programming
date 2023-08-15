#include "main.h"

/**
 * _isalpha - Checks if a character is a letter.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
