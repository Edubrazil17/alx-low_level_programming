#include <stdlib.h>
#include <stdio.h>

/**
 * main - counts arguments
 * @argc: size of comand on line
 * @argv: array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	argv[0] = argv[0];

	if (argc >= 0)
		printf("%d\n", (argc - 1));

	return (0);
}
