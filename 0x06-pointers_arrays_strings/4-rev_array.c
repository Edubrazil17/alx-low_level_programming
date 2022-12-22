#include "main.h"
#include <stdio.h>

/**
 * reverse_array - entry level.
 * @a: input from user
 * @n: input from user
 */

void reverse_array(int *a, int n)
{
	n--;

	while (n > 0)
	{
		printf("%d, ", a[n]);
		n--;
	}

	printf("%d\n", a[n]);
}
