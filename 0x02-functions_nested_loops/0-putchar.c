#include "main.h"
/**
 *	main - print _putchar word forward by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char word[] = "_putchar";

	for (i = 0; word[i] != '\0'; ++i)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
