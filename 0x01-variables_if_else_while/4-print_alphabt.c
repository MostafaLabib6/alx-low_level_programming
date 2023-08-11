#include<stdio.h>

/**
 * main - print alphabet except e and q
 *
 * Return: Always 1.
 */

int main(void)
{
	int s = 97;
	int e = 123;

	while (s < e)
	{
		if (s == 101 || s == 113)
		{
			s++;
			continue;
		}
		putchar(s++);
	}
	putchar('\n');
	return (0);
}
