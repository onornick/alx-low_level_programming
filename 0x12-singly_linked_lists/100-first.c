#include "lists.h"

/**
 * b4_main - Constructor function that executes before main()
 *
 * Description: This function is executed before the main().
 */
void b4_main(void) __attribute__((constructor));

void b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
