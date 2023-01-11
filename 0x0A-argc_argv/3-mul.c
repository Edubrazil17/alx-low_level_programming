#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies
 * @argc: size of comand on line
 * @argv: array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	argv[0] = argv[0];

	if (argc == 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
