#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets in lowercase, except for q and e.
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
