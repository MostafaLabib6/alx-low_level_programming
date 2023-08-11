#include <stdlib.h>

/**
 * 	main - prints all the numbers of base 16 in lowercase,
 * 
 * 	Return: 0
 * 
*/

int main(void)
{
	
	for( int i = 0; i < 10 ; ++i)
		putchar(i + '0');
	
	for( char i = 'a'; i <= 'f' ; ++i)
		putchar(i);

	putchar('\n');
	return (0);
}
