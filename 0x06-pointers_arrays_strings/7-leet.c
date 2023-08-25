#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int x1 = 0, x2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[x1])
	{
		for (x2 = 0; x2 <= 7; x2++)
		{
			if (str[x1] == leet[x2] ||
			    str[x1] - 32 == leet[x2])
				str[x1] = x2 + '0';
		}

		x1++;
	}

	return (str);
}
