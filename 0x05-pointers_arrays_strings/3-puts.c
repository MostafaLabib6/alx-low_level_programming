#include "main.h"
#include<string.h>

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: void
*/

void _puts(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; ++i)
		_putchar(str[i]);
	_putchar('\n');
}
