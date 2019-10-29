#include <stdio.h>
/**
 * first - First function that is executed, before the main
 */
void first (void) __attribute__ ((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
