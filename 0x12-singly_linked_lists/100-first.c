#include <stdio.h>

/**
 * beforeMain - function that prints before main is executed
 *
 */
void beforeMain(void) __attribute__((constructor));

void beforeMain(void)
{
printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
