#include <stdio.h>

void startup(void) __attribute__ ((constructor));

/**
 * startup - prints a sentence before the main function is executed
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
