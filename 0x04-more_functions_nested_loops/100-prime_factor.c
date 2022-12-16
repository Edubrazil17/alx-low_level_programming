#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: Always 0
 */
int main(void)
{
	long input = 612852475143;
	int iter;

	while (iter++ < (input / 2))
	{
		if ((input % iter) == 0)
		{
			input /= 2;
			continue;
		}

		for (iter = 3; iter < (input / 2); iter += 2)
		{
			if ((input % iter) == 0)
				input /= iter;
		}
	}

	printf("%ld\n", input);
	return (0);
}

