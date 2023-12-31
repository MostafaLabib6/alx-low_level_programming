#include<stdio.h>

/**
 * myConstructor - Apply the constructor
 * attribute to myConstructor() so that it
 *   is executed before main()
 */
void myConstructor(void) __attribute__ ((constructor));

/**
 * myConstructor - implementation of myConstructor
 */
void myConstructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
