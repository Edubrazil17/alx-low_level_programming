#include "main.h"

/**
 * _strcmp - entry level.
 * @s1: input from user
 * @s2: input from user
 *
 * Return: Always returning an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, change = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			change = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			change = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			change = s1[i] - s2[i];
			break;
		}
		else
			i++;

	}

	return (change);
}
