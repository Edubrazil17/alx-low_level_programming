#include "main.h"

/**
 * swap_int - entry level.
 * @a: input from user
 * @b: input from user
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
