#include <stdio.h>

/**
* main - this is the entry point of the program
* Description: this function return 1 or 0
* Return: 0
*/
int main(void)
{
	unsigned long a = 0, b = 1, iterator = 0, sum = 0;

	while (iterator <= 4000000)
	{
		iterator = a + b;

		a = b;

		b = iterator;

		if ((a % 2) == 0)
			sum += a;
	}
	printf("%ld\n", sum);
	return (0);

}
