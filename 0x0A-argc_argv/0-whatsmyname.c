#include <stdlib.h>
#include <stdio.h>

/**
 * main - print program name
 * @argc: size of comand on line
 * @argv: array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);

	return (0);
}
