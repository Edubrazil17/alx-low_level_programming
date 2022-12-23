#include "main.h"

/**
 * rot13 - entry level
 * @str: input from user
 *
 * Return: Always returns char *
 */

char *rot13(char *str)
{
	int i, j;

	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = rotated[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
