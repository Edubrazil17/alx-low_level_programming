#include <stdio.h>
#include <stdlib.h>

/**
 * main - return alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
