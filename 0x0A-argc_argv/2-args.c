#include <stdlib.h>
#include <stdio.h>

/**
 * main - print arguments in new line
 * @argc: size of comand on line
 * @argv: array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int iter;

	for (iter = 0; iter < argc; iter++)
		printf("%s\n", argv[iter]);

	return (0);
}
