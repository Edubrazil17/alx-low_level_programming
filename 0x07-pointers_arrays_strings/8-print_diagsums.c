#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - prints the sums of the two diagonals of square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, y, p, m = 0, n = 0;

	for (x = 0; x < size; x++)
	{
		p = (x * size) + x;
		m += *(a + p);
	}
	for (y = 0; y < size; y++)
	{
		p = (y * size) + (size - 1 - y);
		n += *(a + p);
	}
	printf("%i, %i\n", m, n);
}
