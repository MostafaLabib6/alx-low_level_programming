#include<stdio.h>

/**
 * main - print alphabet characters
 * 
 * Return: Always 1.
 */

int main(void)
{
	int s = 97;
	int e = 123;
	
	while(s < e)
		putchar(s++);
	putchar('\n');
	return (0);
}
