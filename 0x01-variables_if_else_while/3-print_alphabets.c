#include<stdio.h>

/**
 *	main - print alphabets lower and upper case
 *
 * Return: Always 1.
 */

int main(void)
{
	int s = 97, e = 123;

	while (s < e)
	{
		if (s < 97)
			putchar(s++);
		putchar(s++);
		if (s == 123)
		{
			s = 65;
			e = 91;
		}
	}
	putchar('\n');
	return (0);
}
