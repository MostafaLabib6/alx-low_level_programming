#include<stdio.h>

/**
 *	main - print _putchar word
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	char word[] = "_putchar";
	for(i=0;word[i]!='\0';++i)
		putchar(word[i]);
	putchar('\n');
	return 0;
}
