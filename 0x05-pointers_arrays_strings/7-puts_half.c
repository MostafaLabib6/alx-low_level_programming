#include"main.h"
#include<string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len / 2; ++i)
		_putchar(str[i]);
	_putchar('\n');
}
