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

	if (len % 2 != 0)
	{
		for (n = ((l - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	else
	{
		for (i = len / 2; i < len; ++i)
			_putchar(str[i]);
	}
	_putchar('\n');
}
