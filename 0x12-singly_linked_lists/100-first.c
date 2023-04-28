#include <stdio.h>
void first(void)__attribute__((constructor));
/**
 * first - executes sentence before the main
 * function executes
 */
void first(void)
{
	printf("you're beat! and yet, you must allow, \n");
	printf("i bore my house upon my back!\n");
}
