#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
