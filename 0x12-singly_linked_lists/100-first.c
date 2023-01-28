#include <stdio.h>

void fun(void) __attribute__((constructor));

/**
 * fun - prints before main is called
 */
void fun(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
