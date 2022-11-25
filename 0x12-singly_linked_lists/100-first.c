#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - Function runs before the main func
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow. \nI");
	printf(" bore my house upon my back!\n");
}
