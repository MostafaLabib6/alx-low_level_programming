#include <stdio.h>

/**
 * myConstructor - Apply the constructor attribute to myConstructor() so that it
 *   is executed before main()
 */
void myConstructor(void) __attribute__((constructor));

/**
 * myConstructor - Apply the constructor attribute to myConstructor() so that it
 *   is executed before main()
 */
void myConstructor(void) {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
