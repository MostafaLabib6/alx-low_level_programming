#include<stdio.h>


/**
 * 	main - print alphabet in reverse
 * 
 * Return: 0
 * 
*/

int main(void)
{
	int s = 122;
	int e = 96;
	
	while(s > e)
		putchar(s--);
	putchar('\n');

	return (0);
}
